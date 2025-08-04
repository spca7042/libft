/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:17:53 by seralves          #+#    #+#             */
/*   Updated: 2025/05/03 17:37:52 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compare two strings
       The  strcmp() function compares the two strings s1 and s2.  
	   returns an integer indicating the result of the comparison, 
	   as follows:

       • 0, if the s1 and s2 are equal;

       • a negative value if s1 is less than s2;

       • a positive value if s1 is greater than s2.
       The  strcmp()  and strncmp() functions return an integer less than, 
	   equal to, or greater than zero if s1 (or the first n bytes thereof) is
	   found,  respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main (void)
{
	unsigned char	*str1 = "te3ste";
	unsigned char	*str2 = "teste";
	size_t	size = 13;
	int		cmp;

	cmp = ft_strncmp(str1, str2, size);
	printf("str1: %s ; str2: %s ; n: %d ; comparison: %d", 
		str1, str2, (int)size, cmp);
	return (0);
}*/
