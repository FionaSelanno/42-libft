/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:01:47 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 16:02:52 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_head;

	temp_head = lst;
	while (temp_head)
	{
		if (!temp_head->next)
			return (temp_head);
		temp_head = temp_head->next;
	}
	return (temp_head);
}
/*
#include <stdio.h>
void	ft_printList(t_list *head)
{
	t_list *temp;
	temp = head;
	while(temp != NULL)
	{
		printf("listitem: %d\n", *(int *)temp->content);
		temp = temp->next;
	}
}

void *get_data(int a)
{
	int *b = malloc(sizeof(int));
	*b = a;
	return b;
}

int	main(void)
{
	t_list 	*head = NULL;
	t_list	*temp_el;
	int i  = 0;
	while(i <= 5)
	{
		i++;
		temp_el = ft_lstnew(get_data(i));
		ft_lstadd_back(&head, temp_el);
	}
	t_list	*lastitem = ft_lstlast(head);
	printf("value of last item: %d\n", *(int *)lastitem->content);
}
*/
