/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:58:02 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/22 13:22:31 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	int	result;

	result = ft_is_prime(-2147483647);
	if (result == 1)
		printf("Prime number !");
	else
		printf("Is not a prime number !");
	return (0);
}
 */
