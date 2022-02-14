/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:31:46 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 14:02:48 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  strcat()  function  appends  the  src string to the dest string,
       overwriting the terminating null byte ('\0') at the end of dest,  and
       then  adds a terminating null byte.  The strings may not overlap, and
       the dest string must have enough space for the result.   If  dest  is
       not  large enough, program behavior is unpredictable; buffer overruns
       are a favorite avenue for attacking secure programs.
       As  with strcat(), the resulting string in dest is always null-termi‐
       nated.

       If src contains n or more bytes, strncat() writes n+1 bytes  to  dest
       (n  from src plus the terminating null byte).  Therefore, the size of
       dest must be at least strlen(dest)+n+1.
RETURN VALUE
       The strcat() and strncat() functions return a pointer to the  result‐
       ing string dest.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
	{
	int		ssize;
	size_t	ret2;
	size_t	j;
	size_t	dstj;
	size_t	i;

	ssize = size - 1;
	i = 0;
	ret2 = size;
	if ((int)ft_strlen(dst) <= ssize)
	{
		ret2 = ft_strlen(dst);
		j = ssize - ft_strlen(dst);
		dstj = ft_strlen(dst);
		while (i < j && src[i] != '\0')
		{
			dst[dstj] = src[i];
			i++;
			dstj++;
		}
		dst[dstj] = '\0';
	}
	return (ft_strlen(src) + ret2);
}
