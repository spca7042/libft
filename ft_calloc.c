/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:42:17 by seralves          #+#    #+#             */
/*   Updated: 2025/05/11 18:12:04 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The  calloc()  function  allocates  memory for an array of nmemb elements 
       of size bytes each and returns a pointer to the allocated memory.  The 
       memory is  set  to zero.   If  nmemb  or  size  is 0, then calloc() 
       returns either NULL, or a unique pointer value that can later be 
       successfully passed to free().  If the  multiplication  of nmemb and size 
       would result in integer overflow, then calloc() returns an error. 
*/

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > ((size_t) - 1) / size)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/* 
#include <stdio.h>
int main(void)
{
	char	*str;
	size_t	nmembros = 0;
	size_t	tamanho = 1;

	str = ft_calloc(nmembros, tamanho);
	free (str);
    return (0);
}
 */