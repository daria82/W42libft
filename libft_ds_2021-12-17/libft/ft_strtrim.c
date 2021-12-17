/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:40:59 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/08 14:13:45 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Turn in files -
Parameters #1. The string to be trimmed. #2. The reference set 
of characters to trim.
Return value The trimmed string. NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		k;

	if (!s1)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, (int)s1[i]) != NULL)
		i++;
	k = ft_strlen(s1) - 1;
	while (k > i && ft_strchr(set, (int)s1[k]) != NULL)
		k--;
	trim = (char *)malloc(sizeof(char) * ((k - i) + 2));
	if (trim == NULL)
		return (NULL);
	ft_strlcpy(trim, (s1 + i), ((k - i) + 2));
	return (trim);
}
