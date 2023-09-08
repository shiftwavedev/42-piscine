/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 08:12:15 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/24 13:00:51 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	len = max - min;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(len * sizeof(int));
	if (*range == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}

/* #include <stdio.h>
int	main(void)
{
	int min, max, result, *range;
	min = 150;
	max = 150;
	result = ft_ultimate_range(&range, min, max);
	printf("Result: %d\n", result);
	for (int i = 0; i < max - min; i++)
		printf("t[%d] = %d\n", i, range[i]);
} */
