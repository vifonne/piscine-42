/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 19:17:09 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/10 08:56:50 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;
	int	*tab;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(int) * diff)))
		return (0);
	while (i < diff)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}
