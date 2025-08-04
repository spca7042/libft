/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 16:43:00 by seralves          #+#    #+#             */
/*   Updated: 2025/05/07 16:43:03 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Return value: None
External functs.: write
Description: Outputs the string ’s’ to the specified file descriptor followed 
by a newline.*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return ;
}
/*
int	main(void)
{
	char 	*string = "teste";
	int		descritor = 1;

	ft_putendl_fd(string, descritor);
	return (0);
}*/