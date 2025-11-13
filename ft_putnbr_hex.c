/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:48:30 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/13 11:58:04 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long nb, char c)
{
	char			*base;
	long			hex;
	unsigned int	dig;
	int				count;

	count = 0;
	hex = 0;
	base = "0123456789";
	dig = 10;
	if (c == 'x' || c == 'p')
	{
		base = "0123456789abcdef";
		dig = 16;
	}
	else if (c == 'X')
	{
		base = "0123456789ABCDEF";
		dig = 16;
	}
	if (nb > dig - 1)
		count += ft_putnbr_hex(nb / dig, c);
	hex = (nb % dig);
	write (1, &base[hex], 1);
	count ++;
	return (count);
}
