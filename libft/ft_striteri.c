void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include "libft.h"

void	ft_to_upper_and_star_even(unsigned int i, char *c)
{
// 1. Aplica a transformação para maiúsculo
	if (*c >= 'a' && *c <= 'z')
		ft_toupper(c[i]);
// 2. Aplica a segunda transformação baseada no índice
	if (i % 2 == 0)
		*c = '*'; // Substitui o caractere por '*' se o índice for par
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Meno bao caiu de bicicleta";

	printf("original:  %s\n", str);
	ft_striteri(str, &ft_to_upper_and_star_even);
	printf("Modificada:  %s\n", str);
	return (0);
}*/
