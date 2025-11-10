/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:46 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/23 20:43:22 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int			ssize;
	size_t		i;

	i = 0;
	ssize = ft_strlen(src);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ssize);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	*src;
	char	dest[20];
	char	*src2;
	char	dest2[20] = "asfasfg";

	src = "deu_certo";
	src2 = "ndeucerto";

	printf("%zu\n", ft_strlcpy(dest, src, 5));
	printf("%s\n", dest);

	printf("Original -- >%zu\n", strlcpy(dest2, src2, 5));
	printf("dest --> %s\n", dest2);

}*/
