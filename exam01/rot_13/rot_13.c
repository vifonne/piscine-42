/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:26:54 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/13 13:46:35 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	else
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] > 64 && av[1][i] < 91)
			{
				if (av[1][i] > 77)
					av[1][i] -= 13;
				else
					av[1][i] += 13;
			}
			else if (av[1][i] > 96 && av[1][i] < 123)
			{	
				if (av[1][i] > 109)
					av[1][i] -= 13;
				else
					av[1][i] += 13;
			}
			i++;
		}
		ft_putstr(av[1]);
		ft_putchar('\n');
	}
}
