/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wta <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:12:49 by wta               #+#    #+#             */
/*   Updated: 2018/07/15 12:55:15 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int ac, char **av)
{
	int **tab;

	tab = NULL;
	if (ac != 10)
		ft_putstr("Error\n");
	else
	{
		if (ft_check_size_args(av))
		{
			tab = ft_init_grid(tab);
			if (!ft_fill_grid(av, tab))
				return (0);
			if (!ft_fill_grid(av, tab))
				return (0);
		}
		else
			return (0);
		ft_solve(tab, 0, 0);
	}
	return (0);
}
