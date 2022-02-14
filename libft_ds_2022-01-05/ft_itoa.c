/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:11:28 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/12 10:58:41 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name		ft_itoa
Prototype 			char *ft_itoa(int n);
Turn in files -
Parameters 			#1. the integer to convert.
Return value 		The string representing the integer. NULL if the allocation fails.
External functs. 	malloc
Description 		Allocates (with malloc(3)) and returns a string representing 
					the integer received as an argument. 
					Negative numbers must be handled.
*/

#include "libft.h"

static int	ft_len(long nn)
{
	int	len;

	len = 0;
	if (nn <= 9)
		return (++len);
	while (nn > 0)
	{	
		nn = nn / 10;
		len++;
	}
	return (len);
}

static char	*ft_divider(int len, char *nnn, long nn)
{
	long	a;
	int		i;

	a = 1;
	while ((len - 1) > 0)
	{
		a = a * 10;
		len--;
	}
	i = 0;
	while (a > 0)
	{
		*(nnn + i) = ((nn / a) + '0');
		nn = nn % a;
		a = a / 10;
		i++;
	}
	nnn[i] = '\0';
	return (nnn);
}

char	*ft_itoa(int n)
{
	long	nn;
	char	*nnn;
	int		sign;
	int		len;
	int		i;

	nn = (long)n;
	sign = 0;
	if (nn < 0)
	{
		sign = 1;
		nn = nn * -1;
	}
	len = ft_len(nn);
	nnn = (char *)malloc(sign + len + 1);
	if (NULL == nnn)
		return (nnn);
	i = 0;
	if (sign)
		nnn[i++] = '-';
	ft_divider(len, &nnn[i], nn);
	return (nnn);
}
