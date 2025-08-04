/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:18:57 by seralves          #+#    #+#             */
/*   Updated: 2025/04/11 16:31:55 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for a digit (0 through 9).

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int i = ft_isdigit('1');
	printf("ft_isdigit '1': %d\n", i);
}
*/