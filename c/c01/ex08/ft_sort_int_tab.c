/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 12:40:43 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/09 12:44:42 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] >= tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			i++;
		}
		j++;
	}
}

// int	main(void)
// {
// 	int	tab[] = {0, 3, 2, 1, 4};
// 	int size;
// 	int	i;

// 	size = 5;
// 	i = 0;
// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("res: %d\n", tab[i]);
// 		i++;
// 	}
// }
