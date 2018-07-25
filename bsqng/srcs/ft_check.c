/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:45:52 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 20:26:32 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

int		ft_check_char(char c, t_fline *ptr)
{
	if (c == ptr->empty || c == ptr->full || c == '\n')
		return (1);
	return (0);
}

int		ft_check_map(t_fline *ptr)
{
	int	i;
	int	j;
	int	tmp;

	j = -1;
	if (ptr->empty == ptr->full || ptr->empty == ptr->to_write
			|| ptr->to_write == ptr->full)
		return (0);
	while (++j < ptr->lines)
	{
		i = 0;
		while (i < ptr->columns)
		{
			if (!ft_check_char(ptr->map[j][i], ptr))
				return (0);
			i++;
		}
		if (!j)
			tmp = i;
		if (i != tmp)
			return (0);
	}
	if (j != ptr->lines)
		return (0);
	return (1);
}
