/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudok_functions01.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:16:18 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 12:55:46 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_display_tab(int **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (j == 8)
			{
				ft_putnbr(tab[i][j]);
				ft_putchar('\n');
			}
			else
			{
				ft_putnbr(tab[i][j]);
				ft_putchar(' ');
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int		ft_valid_arg(char *str)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if ((str[i] < '1' || str[i] > '9') && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		ft_check_size_args(char **av)
{
	int i;
	int size_arg;

	i = 1;
	size_arg = 0;
	while (i < 10)
	{
		size_arg = ft_strlen(av[i]);
		if (size_arg != 9 || !ft_valid_arg(av[i]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int		ft_valid_line(int **tab, int line, int nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[line][i] == nb)
			return (0);
		i++;
	}
	return (1);
}
