/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:07:42 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:50 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  memset()  function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*ss;

	ss = s;
	i = -1;
	while (i++ < (int)n - 1)
	{
		ss[i] = (char)c;
	}
	return (s);
}
