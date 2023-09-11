/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:51:53 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:56:05 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

long long int	size_num(char *num_cleared, int i)
{
	while (num_cleared[i])
		i++;
	return (i);
}

long long	ft_strlen(char *s)
{
	long long	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*mal_the_c(char **tab, long long int len_tab, long long int tab_c_i)
{
	char	*tab_c;

	while (tab[len_tab] != NULL)
		len_tab++;
	tab_c = (char *)malloc(sizeof(char) * len_tab);
	if (!(tab_c))
		return (NULL);
	while (tab_c_i < len_tab)
	{
		tab_c[tab_c_i] = tell_unite(tab[tab_c_i], ft_strlen(tab[tab_c_i]));
		tab_c_i++;
	}
	tab_c[tab_c_i] = '\0';
	return (tab_c);
}
