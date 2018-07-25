/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:17:02 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/13 12:14:59 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] > 64 && str[i] < 91) ||
				(str[i] > 96 && str[i] < 123)))
	{
		if (str[i] == search)
			str[i] = replace;
		i++;
	}
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
	if (ac != 4)
		ft_putchar('\n');
	else
	{
		if (av[1][0] != '\0' && av[2][0] != '\0' && av[3][0] != '\0')
		{
			if (av[2][1] == '\0' && av[3][2] == '\0')
			{
				if ((av[2][0] > 64 && av[2][0] < 91)
						|| (av[2][0] < 123 && av[2][0] > 96))
					if ((av[3][0] > 64 && av[3][0] < 91)
							|| (av[3][0] < 123 && av[3][0] > 96))	
						ft_search_and_replace(av[1], av[2][0], av[3][0]);
			}
			ft_putstr(av[1]);
		}
		ft_putchar('\n');
	}
	return (0);
}
