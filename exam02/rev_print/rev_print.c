/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:52:36 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 09:05:31 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int	i;

	if (ac == 2)
	{
	i = ft_strlen(av[1]);
		while (i >= 0)
		{
			ft_putchar(av[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
