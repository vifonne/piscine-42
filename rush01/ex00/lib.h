/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 00:19:14 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 12:57:25 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_display_tab(int **tab);
int		ft_fill_grid(char **av, int **tab);
int		ft_strlen(char *str);
int		ft_cvalid(char c);
int		ft_ivalid(int i);
int		ft_ctoi(char c);
int		**ft_init_grid(int **tab);
int		**ft_fill_line(int **tab, char **av, int line);
int		ft_valid_arg(char *str);
int		ft_check_size_args(char **av);
int		ft_valid_line_arg(int **tab, int line);
int		ft_valid_col_arg(int **tab, int col);
int		ft_valid_line(int **tab, int col, int nb);
int		ft_valid_sqr(int **tab, int line, int col, int nb);
int		ft_valid_col(int **tab, int line, int nb);
int		ft_solve(int **tab, int line, int col);
#endif
