/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:06:51 by dekulow            #+#    #+# */
/*   Updated: 2023/08/20 13:20:09 by dekulow           ###   ########.fr */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i] != '\0') {
    i++;
  }
  return (i);
}

int	main(int argc, char *argv[]) {
  int i;
  int nb;

  i = 1;
  while (i < argc) {
    nb = ft_strlen(argv[i]);
    write(1, argv[i], nb);
    write(1, "\n", 1);
    i++;
  }
  return (0);
}
