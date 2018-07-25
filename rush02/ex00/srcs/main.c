/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:09:53 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 10:17:22 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int		main(void)
{
	int		line_nb;
	int		colum_nb;
	t_list	*begin_list;
	char	*str;
	int		size;

	line_nb = 0;
	colum_nb = 0;
	begin_list = ft_catch_result(&line_nb, &colum_nb);
	if (line_nb == 0 || colum_nb == 0)
	{
		ft_putstr("aucune\n");
		return (0);
	}
	size = ((line_nb * (colum_nb + 1)) + 1);
	str = ft_put_in_str(&begin_list, size);
	if (!(ft_rush_cmp(str, colum_nb, line_nb)))
		ft_putstr("aucune");
	ft_putchar('\n');
	return (0);
}
