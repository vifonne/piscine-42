/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:08:54 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 14:21:10 by vifonne          ###   ########.fr       */
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

int		ft_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;
	int		tab[127];
	int		tmp;
	int		j;

	j = 0;
	i = 0;
	while (i < 128)
	{
		tab[i] = 0;
		i++;
	}
	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (ft_strchr(av[2], av[1][i]) && !tab[tmp])
			{
				
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
