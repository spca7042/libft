/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 16:46:55 by seralves          #+#    #+#             */
/*   Updated: 2025/04/21 20:36:14 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  memcpy()  function  copies  n  bytes from memory area src to memory area
dest.  The memory areas must not overlap.  
The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	if ((!src && !dest) || n == 0)
		return (dest);
	i = 0;
	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char *str1 = "teste1";
	unsigned char *str2[10];

	printf("antes ft_memcpy: %s\n", str1);
	ft_memcpy(str2, str1, 3);
	printf("apos ft_memcpy: %s\n", str2);
	return (0);
}*/