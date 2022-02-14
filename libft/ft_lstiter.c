/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:49:07 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 18:45:06 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files -
Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ to the content of each element.
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
