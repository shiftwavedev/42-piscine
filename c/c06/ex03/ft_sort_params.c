/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:18:52 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/17 14:18:55 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcpm(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*a;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcpm(av[i], av[j]) > 0)
			{
				a = av[i];
				av[i] = av[j];
				av[j] = a;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
