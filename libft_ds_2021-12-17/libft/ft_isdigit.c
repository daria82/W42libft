/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:05:18 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:37 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for a digit (0 through 9)
The values returned are nonzero if the character c falls  into  the
tested class, and zero if not.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (48 <= c && c <= 57)
		return (1);
	else
		return (0);
}
