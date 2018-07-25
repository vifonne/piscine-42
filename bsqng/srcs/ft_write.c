/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:42:25 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 11:48:23 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

void	ft_write_map(t_fline *ptr, t_sol *max)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (ptr->map[j])
	{
		i = 0;
		while (ptr->map[j][i])
		{
			if ((max->x - i < max->val) && (max->y - j < max->val))
				ft_putchar(ptr->to_write);
			else
				ft_putchar(ptr->map[j][i]);
			i++;
		}
		j++;
	}
}
