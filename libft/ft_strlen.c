/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 13:20:51 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/09 12:25:00 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlen - calculate the length of a string
The strlen() function calculates the length of
the string pointed to by s, excluding the terminating null byte ('\0').
*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
