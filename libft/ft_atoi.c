/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:29:40 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:19 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The  atoi()  function  converts  the  initial  
portion of the string pointed to by nptr to int.
RETURN VALUE The converted value.
*/
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 1;
	while ((nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		&& nptr[i] != '\0')
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]) && nptr[i] != '\0')
	{
		res = res * 10 + ((int)(nptr[i] - '0'));
		i++;
	}
	return (sign * res);
}
