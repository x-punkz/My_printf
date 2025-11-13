/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:14:35 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/12 21:39:19 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putnbr(int nb);
int	ft_putnbr_hex(unsigned long nb, char c);
int	ft_putstr(va_list args_list);
int	ft_printf(const char *format, ...);

#endif
