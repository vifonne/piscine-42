/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:15:29 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/16 18:14:09 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_words(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i] && !ft_is_sep(str[i], charset))
		{
			cnt++;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
		}
	}
	return (cnt);
}

int		ft_count_char(char *str, int *i, char *charset)
{
	int	cnt;

	cnt = 0;
	while (str[*i] && !ft_is_sep(str[*i], charset))
	{
		cnt++;
		(*i)++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_sep(str[i], charset))
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * ft_words(str, charset) + 1)))
		return (0);
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i] && !ft_is_sep(str[i], charset))
		{
			j = i;
			if (!(tab[k] = (char *)malloc(sizeof(char*) *
							ft_count_char(str, &i, charset) + 1)))
				return (0);
			ft_strcpy(tab[k], str + j, charset);
			k++;
		}
	}
	tab[k] = 0;
	return (tab);
}
