/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:32:21 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/07 17:37:25 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_corners(int x, int y, int xmax, int ymax)
{
	if ((x == 1 && y == 1) || (x == xmax && y == ymax)
			|| (x == 1 && y == ymax) || (x == xmax && y == 1))
	{
		if ((y == ymax && x == 1) || (y == ymax && x == xmax))
			ft_putchar('A');
		else
			ft_putchar('C');
	}
}

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
			print_corners(x, y, xmax, ymax);
			if ((y == 1 || y == ymax) && x != 1 && x != xmax)
				ft_putchar('B');
			if ((x == 1 || x == xmax) && y != 1 && y != ymax)
				ft_putchar('B');
			if (x != 1 && x != xmax && y != 1 && y != ymax)
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
