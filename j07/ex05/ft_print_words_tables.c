/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:31:59 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/15 13:36:16 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c);

void	ft_ws_putstr(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
		while (str[i])
			ft_putchar(str[i++]);
}

void	ft_print_words_tables(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		ft_ws_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
