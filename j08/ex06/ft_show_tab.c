/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:19:42 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/18 18:39:59 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 10)
			ft_putchar(nb + 48);
	}
}

void	ft_print_words_tables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	while (par->str)
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		ft_print_words_tables(par->tab);
		par++;
	}
}
