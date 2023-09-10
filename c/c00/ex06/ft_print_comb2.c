/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:53:01 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 13:53:02 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int a)
{
	if (a > 9)
	{
		ft_putchar(a / 10 + 48);
		ft_putchar(a % 10 + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(a + 48);
	}
}

void	ft_print_comb2(void)
{
	int	y;
	int	z;

	y = 0;
	z = 0;
	while (y < 99)
	{
		z = y + 1;
		while (z < 100)
		{
			ft_print(y);
			ft_putchar(' ');
			ft_print(z);
			if (!(y == 98 && z == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			z++;
		}
		y++;
	}
}
