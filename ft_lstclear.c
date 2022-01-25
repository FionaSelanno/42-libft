/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:41:09 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 17:14:17 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_head;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		temp_head = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_head;
	}
	*lst = NULL;
}
/*
first: temporarly save the next item of the list in temp_head
second: delete the first element.
third: relink the elements.
*/
