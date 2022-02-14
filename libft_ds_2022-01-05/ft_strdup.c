/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:47:43 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 14:00:00 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The strdup() function returns a pointer to a new string which is
       a duplicate of the string s.  Memory for the new string  is  ob‐
       tained with malloc(3), and can be freed with free(3).
RETURN VALUE
       On success, the strdup() function returns a pointer to  the  du‐
       plicated  string.   It  returns  NULL if insufficient memory was
       available, with errno set to indicate the cause of the error.
*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	if (s == 0)
		return (0);
	i = 0;
	ptr = malloc(ft_strlen(s) + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
