/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:58:57 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:48 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  memmove()  function copies n bytes from memory area src
       to memory area dest.  The memory areas may overlap:  copying
       takes place as though the bytes in src are first copied into
       a temporary array that does not overlap src or dest, and the
       bytes are then copied from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*destt;
	char	*srcc;

	srcc = (char *)src;
	destt = (char *)dest;
	if ((destt != NULL) && (srcc != NULL) && src > dest)
	{
		i = 0;
		while ((size_t)i < n)
		{
			*(destt + i) = *(srcc + i);
			i++;
		}
	}
	else if ((destt != NULL) && (srcc != NULL) && src < dest)
	{
		i = n;
		while (i-- > 0)
		{
			*(destt + i) = *(srcc + i);
		}
	}
	return (dest);
}
