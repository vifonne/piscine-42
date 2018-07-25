/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:35:43 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/18 18:40:15 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <unistd.h>

struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_putchar(char c);
typedef struct		s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}					t_stock_par;
#endif
