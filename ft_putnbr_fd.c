/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seralves <seralves@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:00:06 by seralves          #+#    #+#             */
/*   Updated: 2025/05/07 17:00:19 by seralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Return value: None
External functs.: write
Description: Outputs the integer ’n’ to the specified file descriptor.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		digit = (int)(n % 10 + 48);
		ft_putchar_fd(digit, fd);
	}
	return ;
}
/*
int	main(void)
{
	int	num = -123;
	int descritor = 1;

	ft_putnbr_fd(num, descritor);
	return (0);
}*/