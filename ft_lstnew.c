/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:29:05 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/24 15:29:10 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (!element)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i1, i2, i3, i4;
	void	*ptr1, *ptr2, *ptr3, *ptr4;
	t_list el1, el2, el3;
	t_list *el4;

	i1 = 1;
	i2 = 2;
	i3 = 3;
	i4 = 4;

	ptr1 = &i1;
	ptr2 = &i2;
	ptr3 = &i3;
	ptr4 = &i4;

	el1.content = ptr1;
	el2.content = ptr2;
	el3.content = ptr3;
	printf("el1 content: %d\n",*(int *)el1.content);
	i1 = 11;
	printf("el1 content: %d\n",*(int *)ptr1);
	el4 = malloc(sizeof(t_list));
	el4 = ft_lstnew(ptr3);
	printf("el4 content: %d\n", *(int *)el4->content);
}
*/
