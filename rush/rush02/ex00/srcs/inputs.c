/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:20:32 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:54:27 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char	*get_dico_input(char tab_c)
{
	char	*temp;
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	temp = read_dico(fd);
	while (temp[0] != tab_c)
	{
		temp = read_dico(fd);
	}
	return (temp);
}

char	*get_dico_input_str(char *tab)
{
	char	*temp;
	int		fd;

	fd = open("numbers.dict", O_RDONLY);
	temp = read_dico(fd);
	while (comp(tab, temp, 0) == 1)
	{
		temp = read_dico(fd);
	}
	return (temp);
}

int	comp(char *tab, char *temp, int i)
{
	while (temp[i] == tab[i])
	{
		if (tab[i] == '\0')
			return (0);
	}
	return (1);
}

void	boucleur_choose(char **tab, char *tab_c)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (tab_c[i] != 'e')
		{
			ft_putstr(&tab_c[i], 0);
		}
		if (tab[i][0] != '0')
		{
			get_dico_input_str(tab[i]);
		}
		i++;
	}
}
