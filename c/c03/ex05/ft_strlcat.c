/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:39:49 by dekulow            #+#    #+#             */
/*   Updated: 2023/08/16 09:19:26 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destl;
	unsigned int	srcl;

	i = ft_strlen(dest);
	j = 0;
	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (size < 1)
		return (srcl + size);
	while (i < size - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < destl)
		return (srcl + size);
	else
		return (destl + srcl);
}

/* #include <stdio.h>

int	main(void)
{
    char dest[] = "Let's go ";
    char content[] = "42 (alias 1337) !!!";
    int result;
    int size = 33;

    result = ft_strlcat(dest,content,size);

	printf("Value returned (string): %s\n", dest);
    printf("Value returned (nb): %d\n",result);
    if( result > size )
        printf("Truncated !");
    else
        printf("Fully copied !");
    return(0);
} */
