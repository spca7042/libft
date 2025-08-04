/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:46:21 by seralves          #+#    #+#             */
/*   Updated: 2025/04/29 14:48:56 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*     The atoi() function converts the initial portion of the string pointed 
	   to by nptr to int.  
       The  string may begin with an arbitrary amount of white space (as 
	   determined by isspace(3)) followed by a single optional '+' or '-' sign. 
	   The remainder of the string is converted to a long value in the obvious 
	   manner, stopping at the first character which is not a valid digit in 
	   the given base.
RETURN VALUE
       The converted value or 0 on error.
*/

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	if (!*nptr)
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		number = 10 * number + nptr[i] - '0';
		i++;
	}
	return (number * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = " \t\v\n\r\f-123";

	printf("%s : %d", str, ft_atoi(str));
	return (0);
}*/