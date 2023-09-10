/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:55:15 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 13:55:16 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

// int	main(void)
// {
// 	int	tab[] = {0, 1, 2, 3, 4};
// 	int size;
// 	int	i;

// 	size = 5;
// 	i = 0;
// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("res: %d\n", tab[i]);
// 		i++;
// 	}
// }
