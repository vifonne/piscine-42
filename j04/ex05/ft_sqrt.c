/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:59:01 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/08 04:56:06 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;
	int	sqrtest;

	res = 1;
	sqrtest = 0;
	while (res <= nb / 2)
	{
		sqrtest = res * res;
		if (sqrtest == nb)
			return (res);
		res++;
	}
	return (0);
}
