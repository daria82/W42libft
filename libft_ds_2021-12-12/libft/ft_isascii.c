/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:04:10 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:32 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks  whether  c  is a 7-bit unsigned char value 
that fits into the ASCII character set.
The values returned are nonzero if the character c falls 
into  the tested class, and zero if not.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
