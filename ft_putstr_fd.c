/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 15:19:18 by seralves          #+#    #+#             */
/*   Updated: 2025/05/07 16:30:56 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: None
External functs. write
Description Outputs the string ’s’ to the specified file
descriptor.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	c;
	int		i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		c = s[i];
		ft_putchar_fd(c, fd);
		i++;
	}
	return ;
}
/*
int main(void)
{
	char	*string = "teste";
	int		descritor = 1;

	ft_putstr_fd(string, descritor);
	return (1);
}
*/
