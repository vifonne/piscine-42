/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudok_functions00.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 23:16:03 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 12:55:23 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_cvalid(char c)
{
	return ((c >= '1' && c <= '9') || c == '.');
}

int	ft_ivalid(int i)
{
	return (i >= 0 && i <= 9);
}

int	ft_ctoi(char c)
{
	if (ft_cvalid(c) && c == '.')
		return (0);
	return (c - '0');
}

int	**ft_init_grid(int **tab)
{
	int i;

	i = 0;
	if (!(tab = (int**)malloc(sizeof(int*) * 9)))
		return (NULL);
	while (i < 9)
	{
		if (!(tab[i] = malloc(sizeof(int) * 9)))
			return (NULL);
		i++;
	}
	return (tab);
}

int	**ft_fill_line(int **tab, char **av, int line)
{
	int i;

	i = 0;
	while (i < 9)
	{
		tab[line][i] = ft_ctoi(av[line + 1][i]);
		i++;
	}
	return (tab);
}
