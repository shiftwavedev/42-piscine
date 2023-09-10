/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:27:40 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 14:27:41 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	sign = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= (-1);
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	return (result * sign);
}

/*
#include <stdio.h>

int	main(void)
{
	int	result;

	char tab[] = "  ---+--+123dfs54ab567";
	result = ft_atoi(tab);
	printf("i = %d\n", result);
	return (0);
}
*/
