/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:32:04 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 23:38:07 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_corners(int x, int y, int ymax, int xmax)
{
	if ((ymax == 1 && xmax != 1) || (ymax != 1 && xmax == 1))
	{
		if (y == 1 && x == 1)
			ft_putchar('\\');
		else if (y == 1 && x == xmax)
			ft_putchar('/');
		else if (y == ymax && x == 1)
			ft_putchar('/');
		else if (y == ymax && x == xmax)
			ft_putchar('\\');
	}
	else
	{
		if (y == 1 && x == 1)
			ft_putchar('/');
		else if (y == 1 && x == xmax)
			ft_putchar('\\');
		else if (y == ymax && x == 1)
			ft_putchar('\\');
		else if (y == ymax && x == xmax)
			ft_putchar('/');
	}
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
				print_corners(x, y, ymax, xmax);
			}
			if (((y == 1 || y == ymax) && x != 1 && x != xmax)
					|| ((x == 1 || x == xmax) && y != 1 && y != ymax))
				ft_putchar('*');
			if (x != 1 && x != xmax && y != 1 && y != ymax)
				ft_putchar(' ');
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
