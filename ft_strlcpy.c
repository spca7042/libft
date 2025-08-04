/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:28:12 by seralves          #+#    #+#             */
/*   Updated: 2025/05/03 17:39:55 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.
The strlcpy() function returns the total length of the string.  For strlcpy() 
that means the length of src. While this may seem somewhat confusing, it was 
done to make truncation detection simple.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	src_size;

	len = 0;
	src_size = ft_strlen(src);
	if (size > 0)
	{
		while (len < size - 1 && src[len] != '\0')
		{
			dst[len] = src[len];
			len++;
		}
		dst[len] = '\0';
	}
	return (src_size);
}
/*
#include <stdio.h>
#include <string.h>
#include <strings.h>

int	main(void)
{
	size_t	len;
	const char	*s1 = "teste";
	char		s2[10];

	len = ft_strlcpy(s2, s1, 0);
	printf ("ft_strlcpy: destino: %s tamanho: %d \n", s2, len);
	//len = strlcpy(s3, s1, 0);
	//printf ("strlcpy: destino: %s tamanho: %d \n", s2, len);	
	return (0);
}*/
