/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:16:39 by seralves          #+#    #+#             */
/*   Updated: 2025/04/17 16:21:18 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//erases  the  data  in the n bytes of the memory starting at the location 
//pointed to by s, by writing zeros (bytes  containing '\0') to that area.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pt;

	pt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pt[i] = '\0';
		i++;
	}
	return ;
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*string = strdup("teste");

	printf("string original: %s\n", string);
	ft_bzero(string, 2);
	printf("string ft_bzero: %s\n", string);
	int		i = 0;
	while (i < 5)
	{
		if (string[i] == '\0')
			write(1, "\\0", 2);
		else
			write(1, &string[i], 1);
		i++;
	}
	char	*string2 = strdup("teste");
	bzero(string2, 2);
	printf("\nstring2 bzero: \n");
	i = 0;
	while (i < 5)
	{
		if (string2[i] == '\0')
			write(1, "\\0", 2);
		else
			write(1, &string2[i], 1);
		i++;
	}
	return (0);
}
*/