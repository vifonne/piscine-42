/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:16:56 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/09 10:38:55 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 65 && str[i] <= 90)
					|| (str[i] >= 97 && str[i] <= 122))
				j++;
			i++;
		}
		if (j == ft_strlen(str))
			return (1);
		else
			return (0);
	}
	return (0);
}
