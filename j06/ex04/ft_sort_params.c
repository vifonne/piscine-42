/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:16:29 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/10 23:06:34 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)s1[i] - (int)s2[i]);
}

void	print_table(char **av)
{
	int	i;

	i = 1;
	while (av[i])
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		tri;
	int		i;
	char	*tmp;

	tmp = NULL;
	tri = 0;
	while (tri == 0)
	{
		tri = 1;
		i = 0;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = *(av + i);
				*(av + i) = *(av + i + 1);
				*(av + i + 1) = tmp;
				tri = 0;
			}
			i++;
		}
	}
	print_table(av);
	return (0);
}
