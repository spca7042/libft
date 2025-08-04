/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:02:26 by seralves          #+#    #+#             */
/*   Updated: 2025/05/11 18:02:26 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: None
External functs.: None
Description: Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
	return ;
}
/*
void	func(unsigned int n, char * ch)
{
	//char	res;

	// if ((!c) || (!n))
	// 	return ;
	// else
	*ch += n; //(c + (char)n);
	return ;
}

#include <stdio.h>

int	main(void)
{
	char	teste[] = "Teste123 4>";

	printf("inicial: %s ; \n", teste);
	ft_striteri(teste, func);
	printf("apos f: %s\n", teste);
	return (0);
}*/
