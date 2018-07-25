/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:58:13 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 13:08:06 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
			tmp = av[1][i];
			if (ft_strchr(av[2], av[1][i]) && !tab[tmp])
			{
				tab[tmp] = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
