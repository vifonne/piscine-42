/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:15:31 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 23:53:19 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

int			ft_first_line(char *file, t_list **begin_list)
{
	int		fd;
	char	c;
	int		i;

	i = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &c, 1) > 0 && c != '\n')
	{
		ft_list_push_front(begin_list, c);
		i++;
	}
	close(fd);
	if (i < 4)
		return (0);
	return (1);
}

int			ft_fill_struct(t_list **begin_list, t_fline *ptr)
{
	int	i;

	i = 0;
	while (begin_list && i < 3)
	{
		if (i == 0)
			ptr->to_write = (*begin_list)->data;
		if (i == 1)
			ptr->full = (*begin_list)->data;
		if (i == 2)
			ptr->empty = (*begin_list)->data;
		(*begin_list) = (*begin_list)->next;
		i++;
	}
	return (1);
}

int			ft_parse_lines(t_fline *ptr, t_list **begin_list)
{
	int		i;
	char	*strlines;
	t_list	*current;

	i = ft_list_size(*begin_list);
	if (!(strlines = (char *)malloc(sizeof(char) * i)))
		return (0);
	current = *begin_list;
	strlines[i] = '\0';
	i--;
	while (current && i >= 0)
	{
		strlines[i] = current->data;
		current = current->next;
		i--;
	}
	ft_list_clear(begin_list);
	ptr->lines = ft_atoi(strlines);
	return (1);
}

int			ft_alloc_map(char *file, t_fline *ptr)
{
	int		i;
	int		j;
	int		fd;
	char	c;

	i = 0;
	j = -1;
	if (!(ptr->map = (char **)malloc(sizeof(char *) * (ptr->lines + 1))))
		return (0);
	if (!(fd = open(file, O_RDONLY)))
		return (0);
	while (read(fd, &c, 1))
		if (c == '\n')
			break ;
	while (read(fd, &c, 1) && c != '\n')
		i++;
	ptr->columns = i;
	while (++j < ptr->lines)
		if (!(ptr->map[j] = (char *)malloc(sizeof(char) * (i + 1) + 1)))
			return (0);
	close(fd);
	ptr->map[j] = 0;
	return (1);
}

int			ft_stock_map(char *file, t_fline *ptr)
{
	int		j;
	int		fd;
	int		ret;
	char	*buf;
	char	c;

	if (!(buf = (char *)malloc(sizeof(char) * (ptr->columns + 1))))
		return (0);
	j = -1;
	if (!(fd = open(file, O_RDONLY)))
		return (0);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
	}
	while ((ret = read(fd, buf, (ptr->columns + 1))) && ++j < ptr->lines)
	{
		buf[ret] = '\0';
		ft_strcpy(ptr->map[j], buf);
	}
	if (read(fd, buf, (ptr->columns + 1)) != 0)
		return (0);
	close(fd);
	return (1);
}
