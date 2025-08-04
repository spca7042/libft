/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:49:45 by seralves          #+#    #+#             */
/*   Updated: 2025/04/29 14:26:34 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
     The strnstr() function locates the first occurrence of the null-terminated 
	 string little in the string big, where not more than len characters are 
	 searched.  Characters that appear after a ‘\0’ character are not searched.
RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere in 
	 big, NULL is returned; otherwise a pointer to the first character of the 
	 first occurrence of little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while ((i < len) && (big[i] != '\0'))
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	agulha[] = "Hello";
	char	palheiro[] = "fkngfdkgfdmgkmfdkHellomkvfdnkgfdng";
	size_t length = 30;

	printf("ft_strnst: first occurrence %s \n",
		ft_strnstr(palheiro, agulha, length));
	return (0);
}*/