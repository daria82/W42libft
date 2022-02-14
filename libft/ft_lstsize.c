/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstroeva <mstroeva@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:06:09 by mstroeva          #+#    #+#             */
/*   Updated: 2021/12/16 22:21:49 by mstroeva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function name ft_lstsize
Prototype int ft_lstsize(t_list *lst);
Turn in files -
Parameters #1. The beginning of the list.
Return value Length of the list.
External functs. None
Description Counts the number of elements in a list.
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int				counter;
	struct s_list	*temp;

	if (lst == NULL)
		return (0);
	counter = 1;
	temp = lst->next;
	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
