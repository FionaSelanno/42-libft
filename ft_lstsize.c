/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:38:11 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 15:39:03 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp_head;

	count = 0;
	temp_head = lst;
	while (temp_head != NULL)
	{
		count++;
		temp_head = temp_head->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list 	*head = NULL;
	t_list	*temp;
	int i  = 0;
	void *i_ptr = &i;
	while(i <= 5)
	{
		i++;
		temp = ft_lstnew(i_ptr);
		ft_lstadd_front(&head, temp);
	}
	printf("size of lst: %d\n", ft_lstsize(head));
}
*/
