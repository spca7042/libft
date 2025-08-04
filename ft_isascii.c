/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:16:32 by seralves          #+#    #+#             */
/*   Updated: 2025/04/17 16:23:15 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether c fits  into the ASCII character set.

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_isascii('Z');
	printf("ft_isascii 'Z': %d\n", i);
}
*/