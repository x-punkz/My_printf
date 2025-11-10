/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:50:58 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 15:36:54 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*flag;
	char	*str;

	flag = 0;
	str = (char *)s;
	while (*str != '\0')
	{
		if (str[0] == c)
			flag = &str[0];
		str++;
	}
	return (flag);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	char	c;

	str = "paralelepipedo";
	c = 'e';
	printf("%s\n", ft_strrchr(str, c));
}
*/
