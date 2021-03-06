/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 13:57:10 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:55 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Turn in files -
Parameters #1. The string to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string āsā to the given file
descriptor, followed by a newline.
*/
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
