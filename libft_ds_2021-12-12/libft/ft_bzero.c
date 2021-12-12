/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:28:07 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:23 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  bzero() function erases the data in the n bytes of the memory starting 
at the location pointed to by s, by  writing  zeros 
(bytes containing '\0') to that area.
The  bzero() function erases the data in the n bytes of the memory 
starting at the location pointed to by s, by  writing  zeros
RETURN VALUE None.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;
	unsigned int	i;

	ss = s;
	i = 0;
	while (i < (unsigned int)n)
	{
		ss[i] = '\0';
		i++;
	}
}
