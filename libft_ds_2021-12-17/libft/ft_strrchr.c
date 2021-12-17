/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:42:50 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/08 13:46:11 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strrchr() function returns a pointer to the last  occurrence  of  the
       character c in the string s.
RETURN VALUE
       The strchr() and strrchr() functions return  a  pointer  to  the  matched
       character  or  NULL  if the character is not found.  The terminating null
       byte is considered part of the string, so that if c is specified as '\0',
       these functions return a pointer to the terminator.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	if (s == 0)
		return (NULL);
	i = 0;
	result = NULL;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
			result = (char *)(s + i);
		i++;
	}
	if (*(s + i) == '\0' && c == '\0')
		result = ((char *)(s + i));
	return (result);
}
