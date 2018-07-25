/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 08:43:24 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/25 09:02:06 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new;

	if (*begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
		*begin_list = ft_create_elem(data);
}
