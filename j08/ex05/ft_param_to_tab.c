/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 20:34:46 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/18 18:38:36 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char	*ret;

	if (!(ret = malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	ft_strcpy(ret, src);
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	t_stock_par			*ptr;

	if (!(ptr = malloc(sizeof(struct s_stock_par) * ac + 1)))
		return (0);
	i = 0;
	if (ac > 0)
	{
		while (av[i])
		{
			ptr[i].size_param = ft_strlen(av[i]);
			ptr[i].str = av[i];
			ptr[i].copy = ft_strdup(av[i]);
			ptr[i].tab = ft_split_whitespaces(av[i]);
			i++;
		}
	}
	ptr[i].str = 0;
	return (ptr);
}
