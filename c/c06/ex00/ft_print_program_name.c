/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:01:36 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/20 13:23:39 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc > 0)
	{
		nb = ft_strlen(argv[0]);
		write(1, argv[0], nb);
		write(1, "\n", 1);
	}
	return (0);
}
