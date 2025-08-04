/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 19:16:50 by seralves          #+#    #+#             */
/*   Updated: 2025/05/07 14:39:33 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: The string representing the integer.
NULL if the allocation fails.
External functs.: malloc
Description: Allocates memory (using malloc(3)) and returns a string 
representing the integer received as an argument. 
Negative numbers must be handled
*/

#include "libft.h"

static int	get_logarithm_ten(int n)
{
	int	log_ten;
	int	temp;

	log_ten = 0;
	if (n < 0)
		temp = -n;
	else
		temp = n;
	while (temp >= 1)
	{
		temp = temp / 10;
		log_ten++;
	}
	return (log_ten);
}

static char	*itoa_if_negative(int n)
{
	int		i;
	int		temp;
	char	*string;
	int		log_ten;

	i = 0;
	log_ten = get_logarithm_ten(n);
	string = ft_calloc((log_ten + 2), sizeof(char));
	if (!string)
		return (NULL);
	string[0] = '-';
	temp = -n;
	while (i < log_ten)
	{
		string[log_ten - i] = (char)((temp % 10) + 48);
		temp = temp / 10;
		i++;
	}
	string[log_ten + 1] = '\0';
	return (string);
}

static char	*itoa_if_positive(int n)
{
	int		i;
	int		temp;
	char	*string;
	int		log_ten;

	i = 0;
	temp = n;
	log_ten = get_logarithm_ten(n);
	string = ft_calloc((log_ten + 1), sizeof(char));
	if (!string)
		return (NULL);
	while (i < log_ten)
	{
		string[log_ten - i - 1] = (char)((temp % 10) + 48);
		temp = temp / 10;
		i++;
	}
	string[log_ten] = '\0';
	return (string);
}

char	*ft_itoa(int n)
{
	char	*string;

	if (n == -2147483648)
		string = ft_strdup("-2147483648");
	else if (n == 0)
		string = ft_strdup("0");
	else if (n < 0)
		string = itoa_if_negative(n);
	else if (n > 0)
		string = itoa_if_positive(n);
	else
		string = NULL;
	return (string);
}
/*
#include <stdio.h>

int	main(void)
{
	int		teste = -137;
	char	*str;

	str = ft_itoa(teste);
	printf("numero: %d ; string: %s\n", teste, str);
	free (str);
	return (0);
}*/
