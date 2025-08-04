/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:22:17 by seralves          #+#    #+#             */
/*   Updated: 2025/04/17 16:38:37 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The  strlen()  function  calculates the length of the string pointed to 
	   by s, excluding the terminating null byte ('\0').
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
		return (0);
	i = ft_strlen(argv[1]);
	printf("length ft_strlen: %d\n", i);
	i = strlen(argv[1]);
	printf("length strlen: %d\n", i);
	return (0);
}
*/