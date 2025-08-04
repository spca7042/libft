/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:00:44 by seralves          #+#    #+#             */
/*   Updated: 2025/05/05 15:00:50 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: The substring.
NULL if the allocation fails.
External functs.: malloc
Description: Allocates memory (using malloc(3)) and returns a substring from 
the string ’s’.
The substring starts at index ’start’ and has a maximum length of ’len’.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	i = 0;
	while (i < len && i < s_len && s[i + start])
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
#include <stdio.h>

int	main (void)
{
	char			*string = "hola";
	char			*substring;
	//int				i;
	unsigned int	inicio;
	size_t			comprimento;

	inicio = 4294967295;
	comprimento = 18446744073709551615;
	substring = ft_substr(string, inicio, comprimento);
	printf("original: %s ; substring: %s", string, substring);
	free (substring);
	return (0);
}*/