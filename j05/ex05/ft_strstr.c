/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:24:31 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/11 08:47:22 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str != NULL)
	{
		if (to_find[0] == '\0')
			return (str);
		while (str[i] != '\0')
		{
			j = 0;
			while (str[i + j] == to_find[j])
			{
				j++;
				if (j == ft_strlen(to_find))
					return (str + i);
			}
			i++;
		}
		return (NULL);
	}
	return (NULL);
}
