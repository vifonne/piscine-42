/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:07:49 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/09 10:26:15 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr_neg(char *str)
{
	int	i;

	i = 0;
	ft_putchar('-');
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr_neg("2147483648");
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb >= 0 && nb <= 9)
			ft_putchar(48 + nb);
	}
}
