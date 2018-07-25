/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 11:27:32 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 10:17:20 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

char	*rush00(int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * (y)) + 1)))
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_strcat(str, ft_line_to_str(x, 'o', '-', 'o'));
	while (i < y - 2)
	{
		ft_strcat(str, ft_line_to_str(x, '|', ' ', '|'));
		i++;
	}
	if (y > 1)
		ft_strcat(str, ft_line_to_str(x, 'o', '-', 'o'));
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*rush01(int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * (y)) + 1)))
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_strcat(str, ft_line_to_str(x, '/', '*', '\\'));
	while (i < y - 2)
	{
		ft_strcat(str, ft_line_to_str(x, '*', ' ', '*'));
		i++;
	}
	if (y > 1)
		ft_strcat(str, ft_line_to_str(x, '\\', '*', '/'));
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*rush02(int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * (y)) + 1)))
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_strcat(str, ft_line_to_str(x, 'A', 'B', 'A'));
	while (i < y - 2)
	{
		ft_strcat(str, ft_line_to_str(x, 'B', ' ', 'B'));
		i++;
	}
	if (y > 1)
		ft_strcat(str, ft_line_to_str(x, 'C', 'B', 'C'));
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*rush03(int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * (y)) + 1)))
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_strcat(str, ft_line_to_str(x, 'A', 'B', 'C'));
	while (i < y - 2)
	{
		ft_strcat(str, ft_line_to_str(x, 'B', ' ', 'B'));
		i++;
	}
	if (y > 1)
		ft_strcat(str, ft_line_to_str(x, 'A', 'B', 'C'));
	str[ft_strlen(str)] = '\0';
	return (str);
}

char	*rush04(int x, int y)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * ((x + 1) * (y)) + 1)))
		return (NULL);
	if (x <= 0 || y <= 0)
		return (NULL);
	ft_strcat(str, ft_line_to_str(x, 'A', 'B', 'C'));
	while (i < y - 2)
	{
		ft_strcat(str, ft_line_to_str(x, 'B', ' ', 'B'));
		i++;
	}
	if (y > 1)
		ft_strcat(str, ft_line_to_str(x, 'C', 'B', 'A'));
	str[ft_strlen(str)] = '\0';
	return (str);
}
