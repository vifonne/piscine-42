/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:14:57 by cbruce            #+#    #+#             */
/*   Updated: 2018/07/21 09:37:05 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int xmax;
	int ymax;

	xmax = x;
	ymax = y;
	while (y > 0)
	{
		x = xmax;
		while (x > 0)
		{
			if ((x == 1 && y == 1) || (x == xmax && y == ymax)
					|| (x == 1 && y == ymax) || (x == xmax && y == 1))
				ft_putchar('o');
			if ((y == 1 || y == ymax) && x != 1 && x != xmax)
				ft_putchar('-');
			if ((x == 1 || x == xmax) && y != 1 && y != ymax)
				ft_putchar('|');
			if (x != 1 && x != xmax && y != 1 && y != ymax)
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
