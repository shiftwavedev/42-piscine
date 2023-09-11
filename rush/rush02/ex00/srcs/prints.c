/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:36:52 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:54:27 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_error(void)
{
	write(2, "ERROR\n", 6);
}

void	ft_putstr(char *str, long long int i)
{
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_headnum(char *str)
{
	ft_putstr("-------------------\n", 0);
	ft_putstr("number splited : ", 0);
	ft_putstr(str, 0);
	ft_putchar('\n');
	ft_putstr("-------------------\n", 0);
}

void	ft_print_tab(char **tab, char *dup_first_c, long long int tab_i,
		char *str)
{
	ft_print_headnum(str);
	while (tab[tab_i] != NULL)
	{
		ft_putchar(tab_i + '0');
		ft_putstr(" : ", 0);
		ft_putstr(tab[tab_i], 0);
		ft_putchar('-');
		ft_putchar(dup_first_c[tab_i]);
		ft_putchar('\n');
		tab_i++;
	}
}
