/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:22:56 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/08 04:31:32 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power >= 2)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	else
		return (nb);
}
