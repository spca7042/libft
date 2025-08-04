/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:07:57 by seralves          #+#    #+#             */
/*   Updated: 2025/05/03 17:40:39 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//     The  strchr() function returns a pointer to the first occurrence of 
//     the character c in the string s.
//     The  strchr() and strrchr() functions return a pointer to the matched 
//     character or NULL if the character is not found.  The terminating null 
//     byte is considered  part  of  the string, so that if c is specified as 
//     '\0', these functions return a pointer to the terminator.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "teste";
	char	ch = 'e';

	printf("%s", ft_strchr(str, ch));
	return (0);
}*/
