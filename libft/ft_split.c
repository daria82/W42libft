/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:38 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 13:57:52 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_split
Prototype 			char **ft_split(char const *s, char c);
Turn in files 		-
Parameters 			#1. The string to be split. #2. The delimiter character.
Return value 		The array of new strings resulting from the split.
					NULL if the allocation fails.
External functs. 	malloc, free
Description 		Allocates (with malloc(3)) and returns an array
		of strings obtained by splitting ’s’ using the
		character ’c’ as a delimiter. The array must be
		ended by a NULL pointer.
*/
#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	if (s[0] == '\0')
		return (counter);
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[i] != c && s[i] != '\0')
		counter = 1;
	while (s[++i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			counter++;
	}
	return (counter);
}

static int	ft_make_line(char *sx, char c, char **final, int rowss)
{
	int	a;

	a = 0;
	while (sx[a] != c && sx[a] != '\0')
		a++;
	final[rowss] = (char *)malloc(sizeof(char) * (a + 1));
	if (NULL == final[rowss])
		return (0);
	ft_strlcpy(final[rowss], (char *)sx, (size_t)(a + 1));
	return (a);
}

static char	**ft_split_final(char const *s, char c, char **final, int rows)
{
	int	i;
	int	rowss;
	int	a;

	rowss = 0;
	i = 0;
	if (rows > 0)
	{
		while (s[i] == c)
			i++;
		while (rowss < rows)
		{
			if (s[i] != c && s[i] != '\0')
			{
				a = ft_make_line((char *)(s + i), c, final, rowss);
				i = i + a;
			}
			rowss++;
			while (s[i] == c && s[i] != '\0')
				i++;
		}
	}
	final[rowss] = NULL;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		rows;

	if (!s)
		return (NULL);
	rows = ft_rows(s, c);
	final = (char **)malloc(sizeof(char *) * (rows + 1));
	if (!final)
		return (NULL);
	ft_split_final(s, c, final, rows);
	return (final);
}
