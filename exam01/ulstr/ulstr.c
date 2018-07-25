/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:16:54 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/13 12:23:00 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
		ft_putchar('\n');
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] > 64 && av[1][i] < 91)
				av[1][i] += 32;
			else if (av[1][i] > 96 && av[1][i] < 123)
				av[1][i] -= 32;
			ft_putchar(av[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
