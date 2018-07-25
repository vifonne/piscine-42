/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 11:57:15 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/07 17:23:03 by vifonne          ###   ########.fr       */
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
	while (str[i] >= 0 && str[i] <= 9)
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

int main(int ac, char **av)
{
	(void)ac;
	printf("my atoi=%d\n", ft_atoi(av[1]));
	printf("libc atoi=%d\n", atoi(av[1]));
}
