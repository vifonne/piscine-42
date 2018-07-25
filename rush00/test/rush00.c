/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:14:57 by cbruce            #+#    #+#             */
/*   Updated: 2018/07/21 09:52:21 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*rush(int x, int y)
{
	int		xmax;
	int		ymax;
	int		i;
	char	*dest = NULL;

	xmax = x;
	ymax = y;
	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * (x * y) + 1)))
		return (NULL);
	while (y > 0)
	{
		x = xmax;
		while (x > 0)
		{
			if ((x == 1 && y == 1) || (x == xmax && y == ymax)
					|| (x == 1 && y == ymax) || (x == xmax && y == 1))
				dest[i++] = 'o';
			if ((y == 1 || y == ymax) && x != 1 && x != xmax)
				dest[i++] = '-';
			if ((x == 1 || x == xmax) && y != 1 && y != ymax)
				dest[i++] = '|';
			if (x != 1 && x != xmax && y != 1 && y != ymax)
				dest[i++] = ' ';
			x--;
		}
		dest[i++] = '\n';
		y--;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s", rush(atoi(av[1]), atoi(av[2])));
	return (0);
}
