/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 13:46:08 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/08 14:19:09 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strchr()  function  returns  a  pointer  to the first 
occurrence of the character c in the string s.
Here "character" means "byte"; these functions do not work with wide 
or multibyte characters. */
/* RETURN VALUE 
the strchr() and strrchr() functions return a pointer to the matched 
character or NULL  if  the character is not found.  
The terminating null byte is considered part of the string, so that if
c is specified as '\0', these functions return a pointer to the terminator. */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0' && *(s + i) == '\0')
		return ((char *)(s + i));
	return (NULL);
}
