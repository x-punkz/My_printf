/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:11:15 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/24 12:19:50 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	di;
	size_t	si;

	di = ft_strlen(dst);
	si = ft_strlen(src);
	if ((di + si) >= size || size == 0)
		return (di + si);
	si = 0;
	if (sizeof (dst) < size)
	{
		while (src[si] != '\0')
		{
			dst[di] = src[si];
			di++;
			si++;
		}
		dst[di] = '\0';
	}
	return (ft_strlen(dst));
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	*src1 = "belezinha";
	char	*src2 = "BELEZINHA";
	char	dest1[20] = "aloalo ze";
	char	dest2[20] = "ALOALO ZE";
	
	printf("my --> %zu\n", ft_strlcat(dest1, src1, sizeof(dest1)));
	printf("Original --> %zu\n", strlcat(dest2, src2, sizeof(dest2)));

	printf("my --> %s\n", dest1);
	printf("Orig --> %s\n", dest2);
}*/
