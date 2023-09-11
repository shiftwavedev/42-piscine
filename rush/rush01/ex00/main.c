/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:00:03 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 18:00:12 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		col_up_check(int board[6][6], int row, int col);
int		col_down_check(int board[6][6], int row, int col);
int		row_left_check(int board[6][6], int row, int col);
int		row_right_check(int board[6][6], int row, int col);
int		check_pos(int board[6][6], int row, int col, int number);
int		solve_board(int board[6][6], int row, int col);
int		validate_args(char *str);
int		ft_strlen(char *str);
void	init_tab(int board[6][6]);
void	populate_tab(int board[6][6], char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	print_board(int board[6][6], int show_params);

int	main(int argc, char **argv)
{
	int	board[6][6];

	if (argc != 2)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	if (!validate_args(argv[1]))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	init_tab(board);
	populate_tab(board, argv[1]);
	if (!solve_board(board, 1, 1))
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	print_board(board, 0);
}

int	solve_board(int board[6][6], int row, int col)
{
	int	i;

	if (row > 4)
	{
		col++;
		row = 1;
	}
	if (col > 4)
		return (1);
	i = 1;
	while (i < 5)
	{
		board[row][col] = i;
		if (check_pos(board, row, col, i))
		{
			if (solve_board(board, row + 1, col))
				return (1);
		}
		board[row][col] = 0;
		i++;
	}
	return (0);
}

int	validate_args(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	if (len != 31)
		return (0);
	i = 0;
	while (i < len)
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void	init_tab(int board[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	populate_tab(int board[6][6], char *str)
{
	int	i;
	int	offset;

	i = 0;
	offset = 1;
	while (i < ft_strlen(str))
	{
		if (i < 7)
			board[0][offset] = str[i] - '0';
		else if (i < 15)
			board[5][offset] = str[i] - '0';
		else if (i < 23)
			board[offset][0] = str[i] - '0';
		else if (i < 31)
			board[offset][5] = str[i] - '0';
		i = i + 2;
		offset++;
		if (offset > 4)
			offset = 1;
	}
}
