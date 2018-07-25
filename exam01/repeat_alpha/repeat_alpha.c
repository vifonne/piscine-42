/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:35:12 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 14:55:02 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] && ((str[i] > 96 && str[i] < 123)
				|| (str[i] > 64 && str[i] < 91)))
		{
			if (str[i] && str[i] >= 'A' && str[i] <= 'Z')
				j = 65;
			else if (str[i] && str[i] >= 'a' && str[i] <= 'z')
				j = 97;
			while (j <= str[i] && str[i])
			{
				ft_putchar(str[i]);
				j++;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac != 2 || av[1][0] == '\0')
		ft_putchar('\n');
	else
	{
		ft_repeat(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
