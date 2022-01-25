/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:15:42 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 17:23:22 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp_head;

	if (!lst || !f)
		return ;
	temp_head = lst;
	while (temp_head)
	{
		f(temp_head->content);
		temp_head = temp_head->next;
	}
}
