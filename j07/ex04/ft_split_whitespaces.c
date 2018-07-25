/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:35:41 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/20 14:41:55 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespaces(char c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

int		ft_count_words(char *str)
{
	int	word;
	int	i;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && ft_is_whitespaces(str[i + 1])
				&& str[i] > 32 && str[i] < 127)
			word++;
		i++;
	}
	return (word);
}

int		ft_wordlen(char *str)
{
	int	i;

	i = 0;
	while (ft_is_whitespaces(str[i]) != 1)
		i++;
	return (i);
}

void	ft_ws_strcpy(char *dest, char **str)
{
	int	i;

	i = 0;
	while (**str && !ft_is_whitespaces(**str))
	{
		dest[i++] = **str;
		(*str)++;
	}
	dest[i] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		words;
	char	**tab;
	int		i;

	i = 0;
	if (!str)
		return (0);
	words = ft_count_words(str);
	if (!(tab = (char**)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	while (i < words)
	{
		while (*str && ft_is_whitespaces(*str) == 1)
			str++;
		if (!(tab[i] = (char*)malloc(sizeof(char) * (ft_wordlen(str) + 1))))
			return (NULL);
		ft_ws_strcpy(tab[i], &str);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
