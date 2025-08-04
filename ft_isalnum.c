/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:33:33 by seralves          #+#    #+#             */
/*   Updated: 2025/04/11 18:16:00 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks for an alphanumeric character

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_isalnum('Z');
	printf("ft_isalnum 'Z': %d\n", i);
}
*/