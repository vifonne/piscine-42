/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:18:45 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 15:25:20 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char tmp;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len)
	{
		tmp = str[len];
		str[len] = str[i];
		str[i] = tmp;
		i++;
		len--;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s\n", ft_strrev(av[1]));
	return (0);
}
