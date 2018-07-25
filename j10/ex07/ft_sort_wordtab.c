/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 08:53:40 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/19 00:09:38 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((int)(s1[i] - s2[i]));
}

int		ft_tab_len(char **tab)
{
	int	j;

	j = 0;
	while (tab[j])
		j++;
	return (j);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_wordtab(char **tab)
{
	int		tri;
	int		i;
	int		len;
	char	**tmp;

	tmp = NULL;
	tri = 0;
	len = ft_tab_len(tab);
	while (tri == 0)
	{
		tri = 1;
		i = 0;
		while (i < len - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				tri = 0;
			}
			i++;
		}
	}
}
