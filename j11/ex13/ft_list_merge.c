/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:02:08 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/25 09:07:32 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;
	if (*begin_list1 && begin_list2)
	{
		while (current->next)
			current = current->next;
		current->next = begin_list2;
	}
}
