/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:05:30 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:28 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks for an alphanumeric character; 
it is equivalent  to (isalpha(c) || isdigit(c)).
RETURN VALUE
The values returned are nonzero if the character 
c falls into  the  tested  class, and zero if not.
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((48 <= c) && (c <= 57))
		return (c);
	else if ((65 <= c) && (c <= 90))
		return (c);
	else if ((97 <= c) && (c <= 122))
		return (c);
	else
		return (0);
}
