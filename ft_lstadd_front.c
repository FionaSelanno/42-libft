/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:26:47 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 15:30:33 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
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
		ft_lstadd_front(&head, temp_el);
	}
	printf("**PRINT LIST: \n");
	ft_printList(head);	
}
*/
