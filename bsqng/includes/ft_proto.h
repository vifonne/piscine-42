/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_proto.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:11:34 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 23:38:50 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROTO_H
# define FT_PROTO_H
# include "ft_struct.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void			ft_error(int nb);
void			ft_list_clear(t_list **begin_list);
void			ft_list_push_front(t_list **begin_list, char data);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_write_map(t_fline *ptr, t_sol *max);
unsigned int	ft_check_around(unsigned int x, unsigned int y, t_fline *ptr);
char			*ft_strcpy(char *dest, char *srcs);
int				ft_fill_struct(t_list **begin_list, t_fline *ptr);
int				ft_args(int ac, char **av, t_fline *ptr, t_sol *solution);
int				ft_atoi(char *str);
int				ft_check_char(char c, t_fline *ptr);
int				ft_check_map(t_fline *ptr);
int				ft_list_size(t_list *begin_list);
int				ft_alloc_map(char *file, t_fline *ptr);
int				ft_fill_first_tab(t_fline *ptr);
int				ft_first_line(char *file, t_list **begin_list);
int				ft_generate_tab(t_fline *ptr);
int				ft_parse_lines(t_fline *ptr, t_list **begin_list);
int				ft_stock_map(char *file, t_fline *ptr);
int				ft_complete_tab(t_fline *ptr, t_sol *max);
t_list			*ft_create_elem(char data);
#endif
