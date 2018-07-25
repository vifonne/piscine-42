/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 13:28:35 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 20:31:57 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

int				ft_generate_tab(t_fline *ptr)
{
	int		i;

	i = -1;
	if (!(ptr->tab = (unsigned int **)malloc(sizeof(unsigned int *)
					* ptr->lines)))
		return (0);
	while (++i < ptr->columns)
		if (!(ptr->tab[i] = (unsigned int *)malloc(sizeof(unsigned int)
						* ptr->columns)))
			return (0);
	return (1);
}

int				ft_fill_first_tab(t_fline *ptr)
{
	int	i;
	int	j;

	j = 0;
	while (j < ptr->lines)
	{
		i = 0;
		while (i < ptr->columns)
		{
			if (ptr->map[j][i] == ptr->empty)
				ptr->tab[j][i] = 1;
			else
				ptr->tab[j][i] = 0;
			i++;
		}
		j++;
	}
	return (1);
}

unsigned int	ft_check_around(unsigned int x, unsigned int y, t_fline *ptr)
{
	unsigned int	min;
	unsigned int	i;

	i = 0;
	if (x == 0 || y == 0)
		return (1);
	min = ptr->tab[y][x - 1];
	if (ptr->tab[y - 1][x - 1] < min)
		min = ptr->tab[y - 1][x - 1];
	if (ptr->tab[y - 1][x] < min)
		min = ptr->tab[y - 1][x];
	return (min + 1);
}

int				ft_complete_tab(t_fline *ptr, t_sol *max)
{
	int		i;
	int		j;

	j = -1;
	while (++j < ptr->lines)
	{
		i = -1;
		while (++i < ptr->columns)
		{
			if (ptr->tab[j][i] == 1)
			{
				ptr->tab[j][i] = ft_check_around(i, j, ptr);
				if (ptr->tab[j][i] > max->val)
				{
					max->val = ptr->tab[j][i];
					max->x = i;
					max->y = j;
				}
			}
		}
	}
	return (1);
}
