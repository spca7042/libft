/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 20:28:12 by seralves          #+#    #+#             */
/*   Updated: 2025/04/24 15:33:42 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strlcat() function appends the NUL-terminated string src to the end of dst.
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
The strlcat() function returns the total length of the string it
tried to create. For strlcat() that means the initial length of dst plus the 
length of src.  While this may seem somewhat confusing, it was done to make 
truncation detection simple.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (size + len_src);
	i = 0;
	while (len_dst + i + 1 < size && src[i] != '\0')
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t len;
	char *s1 = "teste1";
	char s2[10] = "t2";

	len = ft_strlcat(s2, s1, 8);
	printf("destino: %s tamanho: %ld", s2, len);
	return (0);
}
*/