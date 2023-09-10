/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:26:30 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:26:31 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	char s1[5] = "Hello";
	char s2[5] = "HeLlo";
	result = ft_strncmp(s1, s2, 0);
	if (result < 0)
		printf("s1 is less than s2\n");
	else if (result > 0)
		printf("s1 is geather than s2\n");
	else
		printf("s1 is equal to s2\n");
	printf("res: %d", result);
	return (0);
}
*/
