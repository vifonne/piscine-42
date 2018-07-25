/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 16:04:44 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 16:13:49 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int	nb;
	int	ret;

	(void)ac;
	nb = atoi(av[1]);
	ret = 0;
	while (nb != 0)
	{
		if (nb % 2 == 0)
			printf("0");
		ret = ret * 10 + nb % 2;
		nb /= 2;
	}
	printf("%d\n", ret);
	return (0);
}
