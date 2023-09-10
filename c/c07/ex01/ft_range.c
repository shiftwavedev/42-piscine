/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:40:50 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 16:40:51 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*t;

	int min, max;
	min = 150;
	max = -150;
	t = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
		printf("t[%d] = %d\n", i, t[i]);
}
 */
