/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:19:34 by mstroeva          #+#    #+#             */
/*   Updated: 2021/10/12 13:32:16 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t lb)
{
	size_t	bi;
	size_t	li;
	size_t	ll;

	ll = ft_strlen(l);
	bi = 0;
	if (*l == '\0')
		return ((char *)big);
	while (big[bi] != '\0' && bi < lb)
	{	
		li = 0;
		while (big[bi + li] != '\0' && (bi + li) < lb
			&& big[bi + li] == l[li] && li < ll)
			li++;
		if (li == ll)
			return ((char *) big + bi);
		bi++;
	}
	return (0);
}
