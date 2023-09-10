/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:22:37 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:26:01 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= '0' && str[i - 1] <= '9') || (str[i - 1] >= 'A'
					&& str[i - 1] <= 'Z') || (str[i - 1] >= 'a'
					&& str[i - 1] <= 'z')) && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char test[] = "*fsdq dfsf-HELlo 42sdf";
	printf("%s", ft_strcapitalize(test));
	return (0);
}
*/
