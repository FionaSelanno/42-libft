/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 09:27:45 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 15:54:15 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp_head;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp_head = *lst;
	while (temp_head->next != NULL)
	{
			temp_head = temp_head->next;
	}
	temp_head->next = new;
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
	printf("**PRINT LIST: \n");
	ft_printList(head);
}
*/
