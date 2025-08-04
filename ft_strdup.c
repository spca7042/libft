/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:57:47 by seralves          #+#    #+#             */
/*   Updated: 2025/05/04 20:22:15 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The  strdup()  function returns a pointer to a new string which is a 
       duplicate of the string s.  Memory for the new string is obtained  with  
       malloc(3),  and can be freed with free(3).
RETURN VALUE
       On success, the strdup() function returns a pointer to the duplicated 
       string. It  returns NULL if insufficient memory was available
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*strdup;
	size_t	i;
	size_t	length;

	length = ft_strlen(s);
	strdup = (char *)malloc((length + 1) * sizeof(char));
	if (!strdup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		strdup[i] = s[i];
		i++;
	}
	strdup[i] = '\0';
	return (strdup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*string = "teste";
	char	*copia;

	copia = ft_strdup(string);
	printf("Original: %s Copia: %s \n", string, copia);
	free (copia);
	return (0);
}*/