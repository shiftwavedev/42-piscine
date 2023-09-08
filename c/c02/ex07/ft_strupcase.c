/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 08:50:40 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/10 16:43:46 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char test[] = "hello23456789#$^&*()";
	printf("%s", ft_strupcase(test));
	return (0);
}
*/
