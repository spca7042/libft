/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:27:36 by seralves          #+#    #+#             */
/*   Updated: 2025/04/14 18:47:37 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks  for an alphabetic character;

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = ft_isalpha('Z');
	printf("ft_isalpha 'Z': %d\n", i);
	return (0);
}
*/