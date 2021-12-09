/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:45:54 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/07 14:27:45 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
/* Description: This function receives an iteger, treats it as a character, 
returning the lowercase variant if the input variable is a upper case letter. 
Otherwise it's returning the same symbol.*/

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
