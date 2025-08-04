/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:07:57 by seralves          #+#    #+#             */
/*   Updated: 2025/04/25 19:33:20 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//     The  strchr() function returns a pointer to the first occurrence of 
//     the character c in the string s.
//     The  strchr() and strrchr() functions return a pointer to the matched 
//     character or NULL if the character is not found.  The terminating null 
//     byte is considered  part  of  the string, so that if c is specified as 
//     '\0', these functions return a pointer to the terminator.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	last_pos;

	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	i = 0;
	last_pos = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last_pos = i;
		i++;
	}
	if ((char)c == '\0' && s[i] == '\0')
		return ((char *)&s[i]);
	if (s[last_pos] == (char)c)
		return ((char *)&s[last_pos]);
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "\0";
	char	ch = 'e';

	printf("%s", ft_strrchr(str, ch));
	return (0);
}*/