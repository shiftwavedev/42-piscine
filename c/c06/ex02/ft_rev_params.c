/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:40:22 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 16:40:22 by dekulow          ###   ########.fr       */
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

	while (*argv && argc > 1)
	{
		argc--;
		nb = ft_strlen(argv[argc]);
		write(1, argv[argc], nb);
		write(1, "\n", 1);
	}
	return (0);
}
