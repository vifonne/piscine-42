/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:19:54 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 10:12:42 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include "ft_opp.h"

int		ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("0\n");
	return (0);
}

int		ft_is_op(char *str)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(str, g_opptab[i].op) == 0)
			return (1);
		i++;
	}
	g_opptab[5].func(2, 3);
	return (0);
}

int		ft_is_forbidden(int nb, int i)
{
	if (nb == 0 && (i == 3 || i == 4))
	{
		ft_putstr("Stop : ");
		if (nb == 0 && i == 3)
			ft_putstr("division");
		else if (nb == 0 && i == 4)
			ft_putstr("modulo");
		ft_putstr(" by zero\n");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 4)
		return (0);
	else
	{
		if (ft_is_op(av[2]) == 0)
			return (0);
		while (i < 6)
		{
			if (ft_strcmp(av[2], g_opptab[i].op) == 0)
			{
				if (ft_is_forbidden(ft_atoi(av[3]), i) == 1)
					return (0);
				ft_putnbr(g_opptab[i].func(ft_atoi(av[1]), ft_atoi(av[3])));
			}
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
