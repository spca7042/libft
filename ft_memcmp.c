/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:08:42 by seralves          #+#    #+#             */
/*   Updated: 2025/05/03 16:24:47 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
       The  memcmp() function compares the first n bytes (each interpreted as 
       unsigned char) of the memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns an integer less than, equal to, or  
       greater  than zero  if  the  first  n bytes of s1 is found, respectively,
       to be less than, to match, or be greater than the first n bytes of s2.
       For a nonzero return value, the sign is determined by the sign of  the  
       difference between the first pair of bytes (interpreted as unsigned char) 
       that differ in s1 and s2.
       If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str1 = "teste4";
	char	*str2 = "teste";
	size_t	n = 3;
	int		result;

	result = ft_memcmp(str1, str2, n);
	printf("comparar %s %s %d : %d", str1, str2, (int)n, result);
	return (0);
}*/
