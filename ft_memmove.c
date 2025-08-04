/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 20:23:33 by seralves          #+#    #+#             */
/*   Updated: 2025/04/22 20:26:37 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  memmove()  function  copies  n bytes from memory area src to memory area
dest.  The memory areas may overlap: copying takes place as though the  bytes
in  src  are first copied into a temporary array that does not overlap src or
dest, and the bytes are then copied from the temporary array to dest.

RETURN VALUE
The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		*ptr2;

	if (dest == src)
		return (dest);
	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if ((size_t)dest - (size_t)src < n)
	{
		i = n;
		while (--i < n)
		{
			ptr2[i] = ptr[i];
		}
	}
	else
	{
		i = -1;
		while (++i < n)
		{
			ptr2[i] = ptr[i];
		}
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str1 = "123456";
	char	*str2[10];

	printf("antes ft_memmove: %s\n", str1);
	ft_memmove(str2, str1, 4);
	printf("apos ft_memmove: %s\n", str2);
	return (0);
}*/