/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:58:00 by ....              #+#    #+#             */
/*   Updated: 2023/09/10 18:04:19 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printfirstendline(int row, int x, int col, int y)
{
	if ((row == 1 && col == 1) || (row > 1 && (row == x && col == y)))
	{
		ft_putchar('/');
	}
	if (row > 1 || col > 1)
	{
		if ((row == 1 && col == y) || (row == x && col == 1))
		{
			ft_putchar('\\');
		}
	}
	if (row > 1 && row < x)
	{
		ft_putchar('*');
	}
}

void	ft_printmiddleline(int col, int y, int x)
{
	int	space;
	int	border;

	if (!(col == 1 || col == y))
	{
		border = 1;
		if (border == 1)
		{
			ft_putchar('*');
		}
		space = border + 1;
		while (space > 1 && space <= x - 1)
		{
			if (!(border == x))
			{
				ft_putchar(' ');
				if (space == x - 1)
				{
					ft_putchar('*');
				}
			}
			space++;
		}
		border++;
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	col = 1;
	while (col <= y)
	{
		if (col == 1 || col == y)
			row = 1;
		while (row <= x)
		{
			ft_printfirstendline(row, x, col, y);
			row++;
		}
		ft_printmiddleline(col, y, x);
		ft_putchar('\n');
		col++;
	}
}
