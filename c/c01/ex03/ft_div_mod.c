/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:54:51 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 13:54:52 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 6;
// 	b = 2;
// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("res: %d, %d, %d, %d", a, b, div, mod);
// 	return (0);
// }
