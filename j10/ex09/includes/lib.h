/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:10:03 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/21 15:14:17 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <unistd.h>

typedef struct	s_opp
{
	char	*op;
	int		(*func)(int, int);
}				t_opp;
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
int				ft_is_op(char *str);
int				ft_atoi(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_add(int a, int b);
int				ft_sub(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);
#endif
