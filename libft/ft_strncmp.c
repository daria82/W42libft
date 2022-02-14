/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:54:51 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 14:05:37 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  strcmp() function compares the two strings s1 and s2.  The lo‐
       cale is not taken into account (for a locale-aware comparison,  see
       strcoll(3)).  It returns an integer less than, equal to, or greater
       than zero if s1 is found, respectively, to be less than, to  match,
       or be greater than s2.

       The  strncmp()  function  is  similar,  except it compares only the
       first (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer  less  than,
       equal to, or greater than zero if s1 (or the first n bytes thereof)
       is found, respectively, to be less than, to match,  or  be  greater
       than s2.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
