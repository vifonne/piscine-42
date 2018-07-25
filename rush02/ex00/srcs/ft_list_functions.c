/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:47:44 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 14:48:58 by vifonne          ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, char data, int i, int colum_nb)
{
	t_list *tmp;

	tmp = 0;
	if ((*begin_list && begin_list && i > 1) || colum_nb == 1)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

char	*ft_put_in_str(t_list **begin_list, int size)
{
	t_list	*current;
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc(sizeof(char) * size)))
		return (0);
	if (*begin_list)
	{
		current = *begin_list;
		while (current)
		{
			str[i] = current->data;
			current = current->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

t_list	*ft_catch_result(int *line_nb, int *colum_nb)
{
	int		ret;
	char	c;
	t_list	*begin_list;

	while ((ret = read(0, &c, 1)))
	{
		if (c != '\n')
			*line_nb = *line_nb + 1;
		ft_list_push_back(&begin_list, c, *line_nb, *colum_nb);
		if (c == '\n')
			break ;
		*colum_nb = *colum_nb + 1;
	}
	while ((ret = read(0, &c, 1)))
	{
		ft_list_push_back(&begin_list, c, *line_nb, *colum_nb);
		if (c != '\n')
			*line_nb = *line_nb + 1;
	}
	if (*colum_nb == 0 || *line_nb == 0)
		return (NULL);
	*line_nb = *line_nb / *colum_nb;
	return (begin_list);
}
