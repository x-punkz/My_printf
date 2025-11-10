/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:41:08 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 16:01:13 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*s;

	i = 0;
	dst = dest;
	s = src;
	if (dst == s)
		return (dest);
	if (dst > s && dst < s + n)
	{
		i = n;
		while (i > 0)
		{
			dst[i - 1] = s[i - 1];
			i--;
		}
	}
	while (i < n)
	{
		dst[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str[] = "ABCDE";
	char	str2[] = "abcde";
	
	ft_memmove(str + 2, str, 3);
	memmove(str2 + 2, str2, 3);
	printf("my --> %s\n", str);
	printf("Original --> %s\n", str2);

	return 0;
}*/
