/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:20:11 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:56:00 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

char	*mal_num(char n, long long int size, int i)
{
	char	*num;

	num = (char *)malloc(sizeof(char) * size + 1);
	if (!(num))
		return (NULL);
	num[i] = n;
	i += 1;
	while (i < size)
	{
		num[i] = '0';
		i++;
	}
	num[i] = '\0';
	return (num);
}

char	**split_num(char *num_cleared, long long int size, long long int tab_i,
		long long int i)
{
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * size + 1);
	if (!(tab))
		return (NULL);
	while (num_cleared[i])
	{
		tab[tab_i] = mal_num(num_cleared[i], size, 0);
		if (!(tab))
			return (NULL);
		size--;
		tab_i++;
		i++;
	}
	tab[tab_i] = NULL;
	return (tab);
}

char	tell_unite(char *num, long long int size)
{
	if (size >= 3 && num[0] != 0)
		return (num[0]);
	else
		return ('e');
}
