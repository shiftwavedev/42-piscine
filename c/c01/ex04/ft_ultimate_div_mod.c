/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:54:57 by dekulow           #+#    #+#             */
/*   Updated: 2023/09/10 13:54:58 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;

	tmp_a = *a / *b;
	*b = *a % *b;
	*a = tmp_a;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 6;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("res: %d, %d", a, b);
// 	return (0);
// }
