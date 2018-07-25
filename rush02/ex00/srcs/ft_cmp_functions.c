/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:41:30 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 09:57:57 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include "ft_rush.h"

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)s1[i] - (int)s2[i]);
}

int		ft_rush_cmp(char *arg, int x, int y)
{
	int	i;
	int	already_disp;

	i = 0;
	already_disp = 0;
	while (i < 5)
	{
		if (ft_strcmp(arg, g_rushtab[i].generator(x, y)) == 0)
		{
			if (already_disp == 1)
				ft_putstr(" || ");
			ft_putstr(g_rushtab[i].name);
			ft_putstr(" [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("]");
			already_disp = 1;
		}
		i++;
	}
	return (already_disp);
}
