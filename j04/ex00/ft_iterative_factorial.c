/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:59:51 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/06 09:56:23 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb < 13 && nb >= 0)
	{
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
		return (res);
	}
	else
		return (0);
}
