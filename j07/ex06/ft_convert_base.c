/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 17:53:43 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/16 18:06:16 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *nbr, char c, char *base, int bsl)
{
	int	i;

	i = 0;
	if (bsl == 0)
	{
		while (nbr[i])
			i++;
		return (i);
	}
	else
	{
		while (c != base[bsl])
			bsl--;
		return (bsl);
	}
}

int		ft_test_base(int bsl, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (bsl < 2)
		return (0);
	while (base[i++])
	{
		j = i + 1;
		if (base[i - 1] == '+' || base[i - 1] == '-')
			return (0);
		while (base[j - 1])
		{
			if (base[i - 1] == base[j - 1])
				return (0);
			j++;
		}
	}
	return (1);
}

char	*ft_revers(char *tab)
{
	int		i;
	int		length;
	char	tmp;

	i = 0;
	length = ft_strlen(tab, 'a', "a", 0) - 1;
	while (length > i)
	{
		tmp = tab[i];
		tab[i] = tab[length];
		tab[length] = tmp;
		i++;
		length--;
	}
	tab[ft_strlen(tab, 'a', "a", 0)] = '\0';
	return (tab);
}

char	*ft_convert_base_output(char *base, long nbr, int neg)
{
	long	i[2];
	char	*tab;

	i[0] = 1;
	i[1] = nbr;
	while ((int)i[1] > ft_strlen(base, 'a', "abc", 0) && i[0]++ > 0)
		i[1] /= ft_strlen(base, 'a', "abc", 0);
	if (!(tab = (char *)malloc(sizeof(char) * i[0] + 3)))
		return (0);
	i[0] = 0;
	neg == -1 ? tab[i[0]] = '-' : neg++;
	if (neg == -1)
		tab++;
	while (nbr >= (long)ft_strlen(base, 'a', "abc", 0))
	{
		tab[i[0]++] = base[nbr % ft_strlen(base, 'a', "abc", 0)];
		nbr /= ft_strlen(base, 'a', "ab", 0);
	}
	tab[i[0]++] = base[nbr % ft_strlen(base, 'a', "abc", 0)];
	tab[i[0]++] = '\0';
	return (ft_revers(tab));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		bsl;
	int		bsl2;
	int		neg;
	long	result;
	int		i;

	neg = 1;
	result = 0;
	i = 0;
	if (nbr[i] == '-' || nbr[i] == '+')
		if (nbr[i++] == '-')
			neg = -1;
	if (!(ft_test_base((bsl = ft_strlen(base_from, 'a', "abc", 0)), base_from))
	|| !(ft_test_base((bsl2 = ft_strlen(base_to, 'a', "abc", 0)), base_to)))
		return (0);
	while (nbr[i])
	{
		if ((nbr[i] == '-' || nbr[i++] == '+') || ft_strlen(nbr, nbr[i - 1],
					base_from, bsl) < 0)
			return (ft_convert_base_output(base_to, result, neg));
		result = result * bsl + ft_strlen(base_to, nbr[i - 1], base_from, bsl);
	}
	if (neg == -1)
		return (ft_convert_base_output(base_to, result, neg) - 1);
	return (ft_convert_base_output(base_to, result, neg));
}
