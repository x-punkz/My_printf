/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 12:37:55 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/28 13:59:23 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;

	if ((size * nmemb) > INT_MAX && (nmemb > 0 && size > 0))
		return (NULL);
	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	ft_bzero(tab, nmemb);
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*nbr;
	int	*nbr2;
	int	i;

	i = 0;
	nbr = ft_calloc(5, 10);
	nbr2 = calloc(5, 10);
	while (i < 5)
	{
	
		if (nbr == NULL || nbr2 == NULL)
			printf("deu ruim");
		else
		{
			printf("meu--> %d  \n", nbr[i]);
			printf("xx --> %d\n", nbr2[i]);
		}
		i++;
	}
	printf("\n");
}*/
