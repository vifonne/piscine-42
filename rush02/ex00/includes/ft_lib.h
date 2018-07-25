/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:24:18 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/22 22:48:14 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
typedef struct		s_rush
{
	char			*(*generator)(int, int);
	char			*name;
}					t_rush;
t_list				*ft_create_elem(char data);
t_list				*ft_catch_result(int *line_nb, int *colum_nb);
void				ft_list_push_back(t_list **begin_list, char data,
					int i, int colum_nb);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_rush_cmp(char *arg, int x, int y);
int					ft_strcmp(char *s1, char *s2);
int					ft_strlen(char *str);
char				*ft_strcat(char *dest, char *src);
char				*ft_put_in_str(t_list **begin_list, int size);
char				*ft_line_to_str(int x, char left, char middle, char right);
char				*rush00(int x, int y);
char				*rush01(int x, int y);
char				*rush02(int x, int y);
char				*rush03(int x, int y);
char				*rush04(int x, int y);
#endif
