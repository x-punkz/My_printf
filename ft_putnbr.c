/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:02:37 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/12 21:48:27 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	convert;
	int	count;

	count = 0;
	convert = 0;
	if (nb == -2147483648)
		return (write (1, "-2147483648", 11));
	if (nb < 0)
	{
		nb = -nb;
		count += write(1, "-", 1);
	}
	if (nb > 9)
		count += ft_putnbr(nb / 10);
	convert = (nb % 10) + 48;
	write(1, &convert, 1);
	count += 1;
	return (count);
}
/*
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "Put a number!", 12);
}*/
