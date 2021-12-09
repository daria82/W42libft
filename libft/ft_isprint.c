/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:25:12 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/07 21:18:17 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for any printable character including space
The values returned are nonzero if the character c falls  into  the
tested class, and zero if not.
*/
#include <unistd.h>

int	ft_isprint(int c)
{
	if (c < 127 && c >= 32)
		return (1);
	return (0);
}
