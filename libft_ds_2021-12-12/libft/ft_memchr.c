/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 22:47:18 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:42 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
The  memchr()  function scans the initial n bytes of the memory area pointed 
to by s for the first instance of c.  Both c and the bytes of the memory area 
pointed to  by  s  are interpreted as unsigned char.
RETURN VALUE
The  memchr()  and  memrchr() functions return a pointer to the matching 
byte or NULL if the character does not occur in the given memory area.
*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)s;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
			return (ss + i);
		i++;
	}
	return (NULL);
}
