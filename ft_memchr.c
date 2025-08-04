/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 16:28:59 by seralves          #+#    #+#             */
/*   Updated: 2025/05/03 17:38:43 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The  memchr()  function scans the initial n bytes of the memory area 
	   pointed to by s for the first instance of c.  Both c and the  bytes  
	   of  the  memory  area pointed to by s are interpreted as unsigned char.
RETURN VALUE
       The memchr() and memrchr() functions return a pointer to the matching  
	   byte or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(null)
{
	unsigned char	*string = "bonjuorno";
	unsigned char	toseek = 'n';
	size_t			num = 2;
	
	printf("ft_memchr: %s\n", ft_memchr(string, toseek, num));
	return (0);
}*/
