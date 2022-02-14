/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:06:14 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/16 22:21:17 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function name ft_lstnew
Prototype t_list *ft_lstnew(void *content);
Turn in files -
Parameters #1. The content to create the new element with.
Return value The new element.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (NULL == new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
