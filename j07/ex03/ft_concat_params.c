/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 08:55:44 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/17 16:51:25 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (0);
}

char	*ft_set_str(char *str, int argc, char **argv, int k)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i < argc - 1)
		{
			str[k] = '\n';
			k++;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	int		countsize;
	char	*str;

	if (argc < 2)
		return ("");
	if (argc < 3)
		return (argv[1]);
	i = 0;
	countsize = 0;
	while (i < argc)
	{
		countsize = countsize + ft_strlen(argv[i]) + 1;
		i++;
	}
	i = 1;
	k = 0;
	if (!(str = (char *)malloc(sizeof(char) * (countsize + 1))))
		return (0);
	return (ft_set_str(str, argc, argv, k));
}
