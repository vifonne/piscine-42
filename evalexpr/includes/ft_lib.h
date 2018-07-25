/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:42:48 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/22 13:45:35 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H
# include <stdlib.h>
# include <unistd.h>

t_list		*ft_create_elem(char data);
void		ft_list_push_back(t_list **begin_list, char data);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_atoi(char *str);
#endif
