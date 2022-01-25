/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:40:13 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/10 16:20:22 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
//in contrast to strchr the terminating null char is not considered  part of str
//int c is converted to unsigned char for the comparison. See man.
//the result must be a void *.
//n is the length of str 
int	main(void)
{
	char str[] = "example";
	int size_str = ft_strlen(str);
	char c = 'a';
	char c2 = 'b';
	printf("----test with matching char in str----\n");
	printf("MINE: %s\n", ft_memchr(str, c, size_str));
	printf("OR: %s\n", memchr(str, c, size_str));
	printf("----test without matching char in str----\n");
	printf("MINE: %s\n", ft_memchr(str, c2, size_str));
	printf("OR: %s\n", memchr(str, c2, size_str));
}
*/
