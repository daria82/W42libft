/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:06:12 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 20:24:45 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstadd_front
Prototype void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files -
Parameters #1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be
added to the list.
Return value None
External functs. None
Description Adds the element ’new’ at the beginning of the
list.
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
