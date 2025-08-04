/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:16:32 by seralves          #+#    #+#             */
/*   Updated: 2025/04/17 16:25:04 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for any printable character including space.

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_isprint(127);
	printf("ft_isprint 127: %d\n", i);
}
*/