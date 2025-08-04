/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 14:46:01 by seralves          #+#    #+#             */
/*   Updated: 2025/05/07 14:46:21 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Return value: None
External functs.: write
Description: Outputs the character ’c’ to the specified file descriptor.

ssize_t write(int fd, const void buf[.count], size_t count);
write() writes up to count bytes from the buffer starting at buf
to the file referred to by the file descriptor fd.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
/*
#include <fcntl.h>

int	main(void)
{
	int	destino = 2;
	//char *ficheiro = "teste.txt";
	//int	destino = open(ficheiro, O_CREAT | O_RDWR);
    //file descriptor: 1 = terminal; 2 = error; (open)=file; 
	char c = 'a';
	ft_putchar_fd(c, destino);
	//close (destino);
	return (0);
}
*/