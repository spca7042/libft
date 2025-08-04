/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:56:42 by seralves          #+#    #+#             */
/*   Updated: 2025/05/09 13:57:05 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.
External functs.: malloc
Description: Applies the function f to each character of the string s, 
passing its index as the first argument and the character itself as the 
second. A new string is created (using malloc(3)) to store the results from 
the successive applications of f.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char	shift(unsigned int n, char c)
{
	char	res;

	if (!c)
		res = '\0';
	else if (!n)
		res = c;
	else
		res = (char)(c + n);
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char			*teste = "Teste123 4>";
	unsigned int	nb;
	char			*resultado;

	nb = 0;
	resultado = ft_strmapi(teste, shift);
	printf("inicial: %s ; apos f: %s\n", teste, resultado);
	free (resultado);
	return (0);
}*/