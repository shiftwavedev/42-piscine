/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:26:46 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:26:47 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		s = str;
		t = to_find;
		while (*t != '\0' && *s == *t)
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*result;

	char	str[20] = "Hello   world !";
	char 	to_find[20] = "world";
	result = ft_strstr(str, to_find);
	if (result == NULL)
		printf("Result not found !");
	else
		printf("Result find :%s", result);
	return (0);
}
*/
