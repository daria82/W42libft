/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:57:06 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:59:02 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Turn in files -
Parameters #1. The integer to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor.
*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	x;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -1 * n;
	}
	if (n > 10)
	{
		x = n % 10;
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(x + 48, fd);
		return ;
	}
	ft_putchar_fd(n + 48, fd);
}
