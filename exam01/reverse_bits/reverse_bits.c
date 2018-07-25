/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifonne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:53:54 by vifonne           #+#    #+#             */
/*   Updated: 2018/07/13 16:25:52 by vifonne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int				byte_len;
	unsigned char	ret;

	byte_len = 8;
	while (byte_len > 0)
	{
		ret = (ret << 1) | (octet & 1);
		octet = octet >> 1;
		byte_len--;
	}
	return (ret);
}
