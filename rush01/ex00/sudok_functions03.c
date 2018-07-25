/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudok_functions03.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:16:45 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 12:56:23 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_valid_col(int **tab, int col, int nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][col] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_empty(int **tab, int line, int col)
{
	if (tab[line][col] == 0)
		return (1);
	return (0);
}

int	ft_solve(int **tab, int line, int col)
{
	int i;

	i = 1;
	if (line == 8 && col == 9)
	{
		ft_display_tab(tab);
		return (1);
	}
	if (col == 9)
		return (ft_solve(tab, line + 1, 0));
	if (!(ft_is_empty(tab, line, col)))
		return (ft_solve(tab, line, col + 1));
	while (i < 10)
	{
		if (ft_valid_line(tab, line, i) && ft_valid_col(tab, col, i)
				&& !ft_valid_sqr(tab, line, col, i))
		{
			tab[line][col] = i;
			if (ft_solve(tab, line, col + 1))
				return (1);
		}
		i++;
	}
	tab[line][col] = 0;
	return (0);
}

int	ft_fill_grid(char **av, int **tab)
{
	int	i;

	i = 0;
	while (i < 9)
	{
		tab = ft_fill_line(tab, av, i);
		if (!(ft_valid_line_arg(tab, i)))
			return (0);
		i++;
	}
	return (1);
}
