/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbruce <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:59:54 by cbruce            #+#    #+#             */
/*   Updated: 2018/07/07 17:25:18 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_corners(int column, int xmax)
{
	if (column == xmax)
		ft_putchar('A');
	else
		ft_putchar('C');
}

void	rush(int x, int y)
{
	int	xmax;
	int	ymax;

	ymax = y;
	xmax = x;
	while (y > 0)
	{
		x = xmax;
		while (x > 0)
		{
			if ((x == 1 && y == 1) || (x == xmax && y == ymax)
					|| (x == 1 && y == ymax) || (x == xmax && y == 1))
			{
				print_corners(x, xmax);
			}
			if (((y == 1 || y == ymax) && x != 1 && x != xmax)
				|| ((x == 1 || x == xmax) && y != 1 && y != ymax))
				ft_putchar('B');
			if (x != 1 && x != xmax && y != 1 && y != ymax)
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
