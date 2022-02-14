/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:06:02 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/17 18:37:51 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name ft_lstadd_back
Prototype void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files -
Parameters #1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.
Return value None
External functs. None
Description Adds the element ’new’ at the end of the list.
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new != NULL)
	{
		if (lst == NULL || *lst == NULL)
			*lst = new;
		else
		{
			temp = ft_lstlast(*lst);
			if (temp->next == NULL)
			temp->next = new;
		}
	}
}
