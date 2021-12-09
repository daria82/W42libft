/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 17:11:28 by mstroeva          #+#    #+#             */
/*   Updated: 2021/11/20 15:52:36 by mstroeva         ###   ########.fr       */
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

static char	*reverse(char *str)
{
	int		len;
	size_t	i;
	char	finn[12];

	len = ft_strlen(str);
	i = 0;
	while (len > 0)
	{
		finn[i] = str[len - 1];
		len--;
		i++;
	}
	finn[i] = '\0';
	i = 0;
	while (i <= (ft_strlen(str) + 1))
	{
		str[i] = finn[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*mod(long nn, int sign, char *str)
{
	long	mod;
	int		i;
	char	final[12];

	i = 0;
	while (nn > 0)
	{
		mod = nn % 10;
		final[i] = (char)mod + 48;
		nn = nn / 10;
		i++;
	}
	if (sign == -1)
	{
		final[i] = '-';
		i++;
	}
	final[i] = '\0';
	ft_strlcat(str, final, (ft_strlen(final) + 1));
	str = reverse(str);
	return (str);
}

char	*ft_itoa(int n)
{
	long	nn;
	char	*str;
	int		sign;

	sign = 0;
	str = (char *)malloc(12);
	if (!str)
		return (NULL);
	nn = (long)n;
	if (nn == 0)
	{
		str[0] = '0';
		str [1] = '\0';
		return (str);
	}
	if (nn < 0)
	{
		nn = -1 * nn;
		sign = -1;
	}
	str = mod(nn, sign, str);
	return (str);
}
