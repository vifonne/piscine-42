/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:21:36 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 23:53:12 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"
#include "ft_proto.h"

int		ft_args(int ac, char **av, t_fline *ptr, t_sol *solution)
{
	int		i;
	t_list	*begin_list;

	i = 1;
	if (ac != 1)
	{
		while (i < ac)
		{
			solution->val = 0;
			if (!ft_first_line(av[i], &begin_list)
					|| !ft_fill_struct(&begin_list, ptr)
					|| !ft_parse_lines(ptr, &begin_list)
					|| !ft_alloc_map(av[i], ptr)
					|| !ft_stock_map(av[i], ptr)
					|| !ft_check_map(ptr)
					|| !ft_generate_tab(ptr)
					|| !ft_fill_first_tab(ptr)
					|| !ft_complete_tab(ptr, solution))
				ft_error(0);
			else
				ft_write_map(ptr, solution);
			i++;
		}
	}
	return (1);
}

int		ft_stdin(char *file, t_fline *ptr, t_sol *solution)
{
	int		fd;
	char	c;
	t_list	*begin_list;

	if (!(fd = open(file, O_RDWR | O_CREAT, 0666)))
		return (0);
	close(fd);
	if (!(fd = open(file, O_WRONLY | O_TRUNC, 0666)))
		return (0);
	while (read(0, &c, 1) > 0)
		write(fd, &c, 1);
	close(fd);
	solution->val = 0;
	if (!ft_first_line(file, &begin_list) || !ft_fill_struct(&begin_list, ptr)
			|| !ft_parse_lines(ptr, &begin_list)
			|| !ft_alloc_map(file, ptr)
			|| !ft_stock_map(file, ptr)
			|| !ft_check_map(ptr)
			|| !ft_generate_tab(ptr)
			|| !ft_fill_first_tab(ptr)
			|| !ft_complete_tab(ptr, solution))
		ft_error(0);
	else
		ft_write_map(ptr, solution);
	return (1);
}

int		main(int ac, char **av)
{
	t_fline	*ptr;
	t_sol	*solution;

	if (!(ptr = (t_fline *)malloc(sizeof(t_fline))))
		return (0);
	if (!(solution = (t_sol *)malloc(sizeof(t_sol))))
		return (0);
	if (ac != 1)
	{
		if (!(ft_args(ac, av, ptr, solution)))
			ft_error(0);
		return (0);
	}
	else
	{
		if (!(ft_stdin("myfile.txt", ptr, solution)))
			ft_error(0);
		return (0);
	}
	return (0);
}
