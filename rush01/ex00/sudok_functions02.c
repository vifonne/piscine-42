/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudok_functions02.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:16:30 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 19:57:56 by wta              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "lib.h"

int		ft_valid_line_arg(int **tab, int line)
{
	int i;
	int j;
	int count;

	i = -1;
	j = 0;
	count = 0;
	while (++i < 9)
	{
		while (j < 9)
		{
			if (tab[line][j++] == i + 1)
				count++;
			if (count > 1 || !ft_ivalid(tab[line][j]))
			{
				ft_putstr("Erreur 2");
				return (0);
			}
		}
		count = 0;
		j = 0;
	}
	return (1);
}

int		ft_valid_col_arg(int **tab, int col)
{
	int	i;
	int	j;
	int	count;

	i = -1;
	j = 0;
	count = 0;
	while (++i < 9)
	{
		while (j < 9)
		{
			if (tab[j++][col] == i + 1)
				count++;
			if (count > 1)
			{
				ft_putstr("Erreur 2");
				return (0);
			}
		}
		count = 0;
		j = 0;
	}
	return (1);
}

int		ft_valid_sqr(int **tab, int line, int col, int nb)
{
	int start_l;
	int	start_c;
	int	i;
	int	j;

	start_l = line - (line % 3);
	start_c = col - (col % 3);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (tab[start_l + i][start_c + j] == nb)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
