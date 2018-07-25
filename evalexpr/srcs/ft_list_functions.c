/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 13:50:53 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/22 13:56:25 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

t_list	*ft_create_elem(char data)
{
	t_list	*new;

	if (!(new = (t_list*)(malloc(sizeof(t_list)))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_list_pushback(t_list **begin_list, char data)
{
	t_list	*tmp;

	tmp = 0;
	if (*begin_list && begin_list)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
