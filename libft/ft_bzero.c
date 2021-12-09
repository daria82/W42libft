/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:28:07 by mstroeva          #+#    #+#             */
/*   Updated: 2021/10/13 13:29:14 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;
	unsigned int	i;

	ss = s;
	i = 0;
	while (i < (unsigned int)n)
	{
		ss[i] = '\0';
		i++;
	}
}
