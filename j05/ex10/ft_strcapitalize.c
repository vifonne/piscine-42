/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 09:33:58 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/09 23:10:10 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
			if (!((str[i - 1] >= 48 && str[i - 1] <= 57)
						|| (str[i - 1] >= 65 && str[i - 1] <= 90)
						|| (str[i - 1] >= 97 && str[i - 1] <= 122))
						&& (str[i] >= 97 && str[i] <= 122))
			{
				str[i] = str[i] - 32;
			}
			i++;
		}
		return (str);
	}
	return (NULL);
}
