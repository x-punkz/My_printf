/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniviei <daniviei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:34:17 by daniviei          #+#    #+#             */
/*   Updated: 2025/10/30 19:13:39 by daniviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wordlen(char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

static int	w_count(char *s, char c)
{
	int	i;
	int	w_count;

	i = 0;
	w_count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			w_count++;
		i++;
	}
	return (w_count);
}

static char	**populate(char *str, char **arr, char c)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c)
		{
			end = wordlen(&str[i], c);
			arr[j] = (char *)malloc(end + 1);
			ft_strlcpy(arr[j], &str[i], end + 1);
			i = i + end;
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**arr1;

	str = (char *)s;
	arr1 = (char **)malloc(sizeof(char *) * w_count(str, c) + 1);
	if (!arr1)
		return (NULL);
	return (populate(str, arr1, c));
}
/*
#include <stdio.h>

int	main(void)
{
	int		j;
	char	**array_prime;

	j = 0;
	array_prime = ft_split("todo ttrabalho tedioso e trabalhosas",'t');
	while (array_prime[j])
	{
		printf("sprite :) --> %s\n", array_prime[j]);
		j++;
	}
}*/
