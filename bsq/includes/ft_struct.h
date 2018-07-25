/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:10:09 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/23 16:08:38 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCT_H
# define FT_STRUCT_H

typedef struct		s_fline
{
	int				columns;
	int				lines;
	unsigned int	**tab;
	char			empty;
	char			full;
	char			to_write;
	char			**map;
}					t_fline;
typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;
typedef struct		s_sol
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	val;
}					t_sol;
#endif
