/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:07:35 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:46 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not  overlap.   Use
       memmove(3) if the memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcc;
	char	*destt;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	srcc = (char *)src;
	destt = (char *)dest;
	i = 0;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
