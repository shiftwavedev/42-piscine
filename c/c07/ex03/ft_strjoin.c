/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:43:31 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/24 13:18:19 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	int				tmp;

	i = 0;
	tmp = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[tmp + i] = src[i];
		i++;
	}
	dest[tmp + i] = '\0';
	return (dest);
}

int	malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	if (size == 0)
		return (1);
	while (i < size)
	{
		val += ft_strlen(strs[i]);
		i++;
	}
	val += ft_strlen(sep) * (size - 1);
	return (val);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc(sizeof(char) * malloc_size(size, strs, sep));
	if (tab == NULL)
		return (NULL);
	if (size == 0)
	{
		tab[0] = '\0';
		return (tab);
	}
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

/* #include <stdio.h>

int	main(void)
{
	int		size;
	char	*sep;

	char *strs[] = {"Hello", "world", "!!!", "??????"};
	sep = " - ";
	size = 4;
	printf("Result: %s\n", ft_strjoin(size, strs, sep));
	return (0);
}
 */
