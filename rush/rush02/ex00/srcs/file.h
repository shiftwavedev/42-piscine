/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:01:04 by .....             #+#    #+#             */
/*   Updated: 2023/09/10 17:55:19 by dekulow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

void			ft_putchar(char c);
void			ft_print_error(void);
void			ft_putstr(char *str, long long int i);
void			ft_print_tab(char **tab, char *dup_first_c, long long int tab_i,
					char *str);

int				is_numeric(char c);
long long int	str_size(char *str, long long int i, long long int j);
char			*clear_str(char *str, long long int i, long long int j,
					long long int size);

long long int	size_num(char *num_cleared, int i);
char			*mal_num(char n, long long int size, int i);
char			**split_num(char *num_cleared, long long int size,
					long long int tab_i, long long int i);
char			tell_unite(char *num, long long int size);
char			*mal_the_c(char **tab, long long int len_tab,
					long long int tab_c_i);

char			*ft_next(char *str);

long long		ft_strlen(char *s);
char			*read_dico(int fd);
char			*ft_get_line(char *str);
char			*ft_strjoin(char *s1, char *s2);
int				ft_is_new_line(char *str);
char			*get_dico_input(char tab_c);
char			*get_dico_input_str(char *tab);

int				comp(char *tab, char *temp, int i);
void			boucleur_choose(char **tab, char *tab_c);

void			free_tab(char **tab, long long int i);
char			*ft_free_string(char *str);

#endif