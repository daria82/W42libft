/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 21:11:07 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 21:39:15 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_lstmap
Prototype 
t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));
Turn in files -
Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
#3. The adress of the function used to delete the 
content of an element if needed.
Return value The new list. NULL if the allocation fails.
External functs. malloc, free
Description 
Iterates the list ’lst’ and applies the function ’f’ 
to the content of each element. 
Creates a new list resulting of the successive 
applications of the function ’f’. 
The ’del’ function is used to delete the content of an element if needed.
*/
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*head;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (temp == NULL)
		return (NULL);
	head = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp = ft_lstnew(f(lst->content));
		if (temp == NULL)
			ft_lstclear(&head, del);
		ft_lstadd_back(&head, temp);
	}
	return (head);
}
