/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:58:57 by mstroeva          #+#    #+#             */
/*   Updated: 2021/11/03 14:28:08 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
