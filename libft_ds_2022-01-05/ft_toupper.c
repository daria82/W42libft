/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:46:04 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 14:07:38 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description: This function receives an integer, treats it as a character, 
returning the uppercase variant if the input variable is a small letter. 
Otherwise it's returning the same symbol.*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
		c = c - 32;
	return (c);
}
