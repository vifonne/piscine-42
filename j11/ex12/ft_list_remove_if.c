/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:33:25 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/25 09:07:12 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*before;
	t_list	*tmp;

	before = *begin_list;
	current = *(begin_list)->next;
	tmp = NULL;
	if (*begin_list)
	{
		while (current)
		{
			if ((*cmp)(current->data, data_ref) == 0)
			{
				tmp = current;
				current = current->next;
				before->next = current;
				free(tmp);
			}
			else
			{
				current = current->next;
				before = before->next;
			}
		}
	}
}
