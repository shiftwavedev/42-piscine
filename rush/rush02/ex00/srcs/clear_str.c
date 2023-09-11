/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 23:02:37 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:54:49 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.h"

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (0);
	else
		return (1);
}

long long int	str_size(char *str, long long int i, long long int j)
{
	if (str[0] == '\0')
		return (0);
	while (is_numeric(str[i]) == 1 && str[i])
		i++;
	j = i;
	while (is_numeric(str[j]) == 0 && str[j])
		j++;
	return (j - i);
}

char	*clear_str(char *str, long long int i, long long int j,
		long long int size)
{
	char	*dup_num;

	if (size == 0)
	{
		ft_print_error();
		return (NULL);
	}
	while (is_numeric(str[i]) == 1 && str[i])
		i++;
	dup_num = (char *)malloc(sizeof(char) * size + 1);
	if (!(dup_num))
		return (NULL);
	while (is_numeric(str[i]) == 0 && str[i])
	{
		dup_num[j] = str[i];
		i++;
		j++;
	}
	dup_num[j] = '\0';
	return (dup_num);
}
