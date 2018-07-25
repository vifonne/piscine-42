/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:15:17 by cbruce            #+#    #+#             */
/*   Updated: 2018/07/21 09:49:05 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int		ft_putchar(char c);

void	rush(int x, int y);

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", rush(atoi(av[1]), atoi(av[2])));
	return (0);
}
