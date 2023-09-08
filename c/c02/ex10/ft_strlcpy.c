/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+ */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:56:32 by dekulow            #+#    #+# */
/*   Updated: 2023/08/10 16:44:34 by dekulow           ###   ########.fr */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) {
  unsigned int i;

  i = 0;
  while ((!(src[i] == '\0')) && i < size - 1) {
    dest[i] = src[i];
    i++;
  }
  if (size != 0)
    dest[i] = '\0';
  return (i);
}

/*
#include <stdio.h>

int	main(void)
{
        char	dest[7];

        ft_strlcpy(dest, "Hello", 3);
        printf("res: %s", dest);
        return (0);
}
*/
