/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 08:42:09 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/10 09:06:52 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char			*tmp;

	i = 0;
	tmp = dest + ft_strlen(dest);
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello ";
	char 	src[] = "world !";

	ft_strcat(dest, src);
	printf("res: %s", dest);
	return (0);
}
*/
