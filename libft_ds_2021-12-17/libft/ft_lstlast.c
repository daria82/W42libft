/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:06:06 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/16 22:22:46 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_lstlast
Prototype t_list *ft_lstlast(t_list *lst);
Turn in files -
Parameters #1. The beginning of the list.
Return value Last element of the list.
External functs. None
Description Returns the last element of the list.
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;
	t_list	*lastlast;

	if (NULL == lst)
		return (lst);
	last = lst;
	lastlast = lst->next;
	while (lastlast != NULL)
	{
		last = lastlast;
		lastlast = lastlast->next;
	}
	return (last);
}
