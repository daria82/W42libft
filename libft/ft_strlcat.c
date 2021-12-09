/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 16:31:46 by mstroeva          #+#    #+#             */
/*   Updated: 2021/10/11 12:35:01 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
