/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:15:17 by cbruce            #+#    #+#             */
/*   Updated: 2018/07/20 23:38:14 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);

void	rush(int x, int y);

int		main(int ac, char **av)
{
	(void)ac;
	rush(atoi(av[1]), atoi(av[2]));
	ft_putchar('\n');
	return (0);
}
