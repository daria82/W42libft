/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 12:34:42 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 14:45:30 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_lstdelone
Prototype void ft_lstdelone(t_list *lst, void (*del)(void*));
Turn in files -
Parameters #1. The element to free.
#2. The address of the function used to delete the
content.
Return value None
External functs. free
Description Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
*/
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
		lst = NULL;
	}
}
