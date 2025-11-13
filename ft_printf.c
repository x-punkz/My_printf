/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:18:40 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/13 11:24:34 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

static int	verify(va_list args_list, char s)
{
	int		count;
	void	*p;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(args_list, int));
	else if (s == 's')
		count += ft_putstr(args_list);
	else if (s == 'p')
	{
		p = (va_arg(args_list, void *));
		if (!p)
			count += write(1, "(nil)", 5);
		else
		{
			write(1, "0x", 2);
			count += ft_putnbr_hex((unsigned long)p, s);
			count += 2;
		}
	}
	else if (s == 'i' || s == 'd')
		count += ft_putnbr(va_arg(args_list, int));
	else if (s == 'X' || s == 'x' || s == 'u')
		count += ft_putnbr_hex(va_arg(args_list, unsigned int), s);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args_list;

	i = 0;
	count = 0;
	va_start(args_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				count += ft_putchar('%');
			else
				count += verify(args_list, format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args_list);
	return (count);
}
