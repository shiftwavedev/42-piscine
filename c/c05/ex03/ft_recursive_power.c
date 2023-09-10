/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:28:03 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 16:28:04 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

/* #include <stdio.h>

int	main(void)
{
	printf("result: %d", ft_recursive_power(5, -99));
	return (0);
}
 */
