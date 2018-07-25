/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:05:06 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 21:58:36 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

int			ft_list_size(t_list *begin_list)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = begin_list;
	while (ptr)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}

t_list		*ft_create_elem(char data)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void		ft_list_push_front(t_list **begin_list, char data)
{
	t_list	*new;

	if (*begin_list && begin_list)
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
	else
		*begin_list = ft_create_elem(data);
}

void		ft_list_clear(t_list **begin_list)
{
	t_list	*ptr;
	t_list	*tmp;

	tmp = NULL;
	ptr = *begin_list;
	if (*begin_list && begin_list)
	{
		while (ptr)
		{
			tmp = ptr;
			ptr = ptr->next;
			free(tmp);
		}
	}
	(*begin_list) = NULL;
}
