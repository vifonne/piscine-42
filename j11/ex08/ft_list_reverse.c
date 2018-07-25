/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:01:12 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/25 09:05:05 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*before;
	t_list	*current;
	t_list	*after;

	before = NULL;
	current = *begin_list;
	if ((*begin_list)->next)
		after = (*begin_list)->next;
	while (after)
	{
		current->next = before;
		before = current;
		current = after;
		after = after->next;
	}
	after->next = current;
	*begin_list = after;
}
