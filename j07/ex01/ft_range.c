/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 19:00:44 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/23 12:55:02 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	diff;
	int	i;

	i = 0;
	diff = max - min;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * diff)))
		return (NULL);
	while (i < diff)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
