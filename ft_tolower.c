/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:04:20 by seralves          #+#    #+#             */
/*   Updated: 2025/04/14 15:57:52 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int i = 'A';
	int j = ft_tolower(i);
	printf("original: %c Final: code %d character %c", (char)i, j, (char)j);
	return (0);
}*/
