/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 13:33:22 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 23:44:25 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void*));
Turn in files -
Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to delete the content of the element.
Return value None
External functs. free
Description Deletes and frees the given element and every
successor of that element, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
*/
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	while (*lst != NULL)
	{
		current = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = current;
	}
	lst = NULL;
}
