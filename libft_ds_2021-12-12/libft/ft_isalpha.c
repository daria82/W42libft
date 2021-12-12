/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:03:21 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:34 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
checks  for an alphabetic character; in the standard "C" locale, 
it is equivalent to (isupper(c)  ||  islower(c)).
In some  locales,  there may be additional characters for which
isalpha() is true—letters which are  neither  uppercase  nor
lowercase.
RETURN VALUE
The  values  returned  are nonzero if the 
character c falls into the tested  class,
and zero if not.
*/
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	else
		return (0);
}
