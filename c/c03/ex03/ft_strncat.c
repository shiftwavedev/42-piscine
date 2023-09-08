/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:08:21 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/15 08:53:29 by dekulow           ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = dest + ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
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
	char	dest[50] = "Hello";
	char	src[] = " world !";

	ft_strncat(dest, src, 3);
	printf("res: %s", dest);
	return (0);
}
*/
