/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 21:03:05 by seralves          #+#    #+#             */
/*   Updated: 2025/05/05 21:03:28 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: The trimmed string.
NULL if the allocation fails.
External functs.: malloc
Description: Allocates memory (using malloc(3)) and returns a copy of ’s1’ 
with characters from ’set’ removed from the beginning and the end.
*/

#include "libft.h"

static int	is_trim_char(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_ini_lim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (is_trim_char(s1[i], set))
		i++;
	return (i);
}

static size_t	ft_final_lim(char const *s1, char const *set, size_t len)
{
	size_t	i;

	i = 0;
	while (is_trim_char(s1[len - i - 1], set))
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	size_t	len;
	size_t	tlen_i;
	size_t	tlen_f;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	len = ft_strlen(s1);
	tlen_i = ft_ini_lim(s1, set);
	tlen_f = ft_final_lim(s1, set, len);
	if (tlen_i >= len || tlen_f >= len || tlen_i + tlen_f >= len)
		return (ft_strdup(""));
	trimmed = malloc(len - tlen_i - tlen_f + 1);
	if (!trimmed)
		return (NULL);
	i = -1;
	while (++i < (len - tlen_i - tlen_f))
		trimmed[i] = s1[tlen_i + i];
	trimmed[i] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s1 = "  \t \t \n   \n\n\n\t";
	char	*ret = ft_strtrim(s1, " \n\t");

	printf ("resultado: %s\n", ret);
	free (ret);
	return (0);
}
*/