/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:36:10 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 14:06:55 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	char *ft_substr(char const *s, unsigned int start, size_t len);

	Parameters 
	#1. The string from which to create the substring.
	#2. The start index of the substring in the string ’s’.
	#3. The maximum length of the substring.

	Return value 
	The substring. NULL if the allocation fails.

	External functs. malloc

	Description
	Allocates (with malloc(3)) and returns a substring from the string ’s’.
	The substring begins at index ’start’ and is of maximum size ’len’.
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*res;
	unsigned int		i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL || *s == '\0' || res == NULL)
		return (NULL);
	while (i < (len) && s[start + i] != '\0')
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
