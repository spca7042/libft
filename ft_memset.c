/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:15:33 by seralves          #+#    #+#             */
/*   Updated: 2025/04/21 18:44:28 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fills  the  first  n  bytes of the memory area pointed to by s with the 
//constant byte c.

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	string[] = "teste";
//	char	*string = ft_strdup("teste");
//	char	*string;

//	string = malloc(sizeof(char)*10);
//	string = "teste";
	printf("string original: %s \n", string);
	ft_memset(string, 'X', 2);
	printf("string ft_memset: %s\n", string);
//	string = "teste";
//	memset(string, 'X', 2);
//	printf("string memset: %s", string);
	return (0);
}
*/