/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:43:45 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/13 12:00:14 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(va_list args_list)
{
	int		i;
	int		count;
	char	*str;

	str = va_arg(args_list, char *);
	if (!str)
	{	
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}
