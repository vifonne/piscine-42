/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 00:24:02 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/16 09:57:05 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (match(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (match(s1 + 1, s2) || match(s1 + 1, s2 + 1));
	else
		return (0);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%i", match(av[1], av[2]));
	return (0);
}
