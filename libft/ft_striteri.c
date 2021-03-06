/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 13:54:18 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 13:58:31 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name		ft_striteri
Prototype			void ft_striteri(char *s, void (*f)(unsigned int, char*));
Turn in files -
Parameters			#1. The string on which to iterate.
					#2. The function to apply to each character.
Return value 		None.
External functs.	None
Description			Applies the function f to each character of the
					string passed as argument, and passing its index
					as first argument. Each character is passed by
					address to f to be modified if necessary
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	i = 0;
	if (s != NULL || f != NULL)
	{
		len = (unsigned int)ft_strlen(s);
		while (i < len)
		{
			(*f)(i, (s + i));
			i++;
		}
	}
}
