/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:27:50 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 16:27:51 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
	return (0);
} */
