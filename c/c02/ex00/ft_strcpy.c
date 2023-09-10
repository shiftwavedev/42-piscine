/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:21:43 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:21:47 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (!(src[i] == '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>

int	main(void)
{
char	dest[7];

ft_strcpy(dest, "Hello!!");
printf("res: %s", dest);
	return (0);
}
*/
