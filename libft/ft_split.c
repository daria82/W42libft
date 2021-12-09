/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:15:38 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/09 11:52:42 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[i] != c && s[i] != '\0')
		counter++;
	while (s[i++] != '\0')
	{
		if ((s[i] != c && s[i] != '\0') && s[i - 1] == c)
			counter++;
	}
	return (counter);
}

static char	**ft_split_final(char const *s, char c, char **final, int rows)
{
	int		i;
	int		a;
	int		rowss;

	rowss = -1;
	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (++rowss < rows)
	{
		if (s[i] != c && s[i] != '\0')
		{
			a = 0;
			while (s[i + a] != c && s[i + a] != '\0')
				a++;
			final[rowss] = (char *)malloc(sizeof(char) * (a + 1));
			ft_strlcpy(final[rowss], (char *)(s + i), (size_t)(a + 1));
			i = i + a;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	final[rowss] = 0;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		rows;

	if (!s)
		return (NULL);
	rows = ft_rows(s, c) + 1;
	final = (char **)malloc(sizeof(char *) * rows);
	if (!final)
	{
		free (final);
		return (NULL);
	}
	ft_split_final(s, c, final, rows);
	return (final);
}
