/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 20:39:24 by seralves          #+#    #+#             */
/*   Updated: 2025/05/05 20:43:06 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: The new string.
NULL if the allocation fails.
External functs.: malloc
Description: Allocates memory (using malloc(3)) and returns a new string, which
is the result of concatenating ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	i;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!joined_str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		joined_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		joined_str[i] = s2[i - len1];
		i++;
	}
	joined_str[i] = '\0';
	return (joined_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "teste1";
	char *str2 = "teste2";
	char *juncao;

	juncao = ft_strjoin(str1, str2);
	printf ("str1: %s; str2: %s; juncao: %s\n", str1, str2, juncao);
	free (juncao);
	return (0);
}*/
