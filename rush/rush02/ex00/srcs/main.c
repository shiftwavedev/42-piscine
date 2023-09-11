/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:59:39 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:54:27 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int	main(int ac, char **av)
{
	long long int	size;
	char			*dup;
	char			**tab_main;
	char			*tab_c;

	if (ac == 2)
	{
		dup = clear_str(av[1], 0, 0, str_size(av[1], 0, 0));
		size = size_num(dup, 0);
		tab_main = split_num(dup, size, 0, 0);
		tab_c = mal_the_c(tab_main, size, 0);
		ft_print_tab(tab_main, tab_c, 0, dup);
		ft_free_string(dup);
		ft_free_string(tab_c);
		free_tab(tab_main, 0);
	}
}

// else if (ac == 3)
// {
// 	dup = clear_str(av[2], 0, 0, str_size(av[2], 0, 0));
// 	size = size_num(dup, 0);
// 	tab_main = split_num(dup, size, 0, 0);
// 	tab_c = mal_the_c(tab_main, size, 0);
// 	ft_print_tab(tab_main, tab_c, 0, dup);
// 	ft_free_string(dup);
// 	ft_free_string(tab_c);
// 	free_tab(tab_main, 0);
// }
// boucleur_choose(tab_main, tab_c);
