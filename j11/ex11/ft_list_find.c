/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:32:22 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/25 09:06:34 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr && (*cmp)(list_ptr->data, data_ref) != 0)
		list_ptr = list_ptr->next;
	return (list_ptr);
}
