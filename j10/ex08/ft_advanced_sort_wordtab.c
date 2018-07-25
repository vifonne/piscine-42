/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:00:28 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/19 08:31:21 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tab_len(char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		j++;
	}
	return (j);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int	tri;
	int	i;
	int	len;

	tri = 0;
	len = ft_tab_len(tab);
	while (tri == 0)
	{
		tri = 1;
		i = 0;
		while (i < len - 1)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				tri = 0;
			}
			i++;
		}
	}
}
