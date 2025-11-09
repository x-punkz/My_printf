/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:18:40 by daniviei          #+#    #+#             */
/*   Updated: 2025/11/07 19:29:25 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdargs.h>

int	ft_printf(const char *format, ...)
{
	
	int	i;
	int	count;
	va_list	args_list;

	i = 0;
	/* va_s - inicializa va_list p apontar o 1 arg. Ele recebe v_arg e
	 * o ultimo arg nomeado da funçao */
	va_start(args_list, count);

	/* va-a pega o valor do arg atual e avanca o ponteiro para o prox.
	 * é necessario especificar o tipo de dado (int, char, char*...)*/
	va_arg(args_list, tipo);

	/* va_e limpa e finaliz o processamento dos arg.
	 * deve ser chamado antes da func retornar*/
	va_end(args_list);
	
	/* va_ c é usada para criar uma cpy de args_list iniciada com va_start.
	 * Isso permite processar a mesma args_list várias vezes,
	 * o que é útil quando vc precisa iterar sobre a list de args
	 * em diferentes momentos ou de maneiras difers dentro da mesma func.
	 * É essencial q va_end seja chamado em ambas as lists (a orig e cpy)
	 * antes que a função termine ou antes que a lista seja re-inic.*/
	va_copy()
	
	while (format[i])
	{
		if (format[i] == "%")
		{
			i++;
			if (format[i] == "c")
				ft_putchar(va_args(args_list, char));

			else if (format[i] == "s")
				ft_putstr(va_args(args_list, char*));

			else if (format[i] == "p")
				f-p-pointer(va_args(args_list, int));

			else if (sormat[i] == "i")
				ft_atoi(va_args(args_list, int));

			else if (format[i] == "d")
				f-p-decimal(va_args(args_list, int));

			else if (format[i] == "u")
				f-p-unsignedInt(va_args(args_list, unsigned int));

			else if (format[i] == x)
				ft_print_lower_hex(va_args(args_list, int));

			else if (format[i] == "X")
				ft_print_upper_hex(va_args(args_list, int));

			else if (format[i] == "%")
				f-p-print_%(va_args(args_list, char));
		}
		else
			ft_putchar(format[i]);
		va_end(args_list);
		i++
	}
	return ();
}

int	main(void)
{
	ft_printf("imprime %s, um int %i e um decimal %d. O o enderço deste point é %p\n",);
	ft_printf("Toma esse uns int %u, em hexinho %x e em hexao agora %X", );
	ft_printf("Ah e, tem esse %% tbm. ^_^", );
}
