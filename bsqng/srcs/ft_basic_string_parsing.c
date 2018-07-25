/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_string_parsing.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 22:35:57 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/24 11:48:48 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	cpt;
	int	neg;

	i = 0;
	neg = 1;
	cpt = 0;
	while ((str[i] >= 0 && str[i] <= 9) || str[i] == 32 || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		cpt = cpt * 10 + str[i] - 48;
		i++;
	}
	return (cpt * neg);
}
