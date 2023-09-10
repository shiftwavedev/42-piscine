/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:26:25 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:26:26 by dekulow          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	s1l;
	int	s2l;
	int	max;

	i = 0;
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	if (s1l > s2l)
		max = s1l;
	else
		max = s2l;
	while (i <= max)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	char s1[5] = "Hello";
	char s2[5] = "HlO";
	result = ft_strcmp(s1, s2);
	if (result < 0)
		printf("s1 is less than s2\n");
	else if (result > 0)
		printf("s1 is greather than s2\n");
	else
		printf("s1 is equal to s2\n");
	printf("res: %d", result);
	return (0);
}
*/
