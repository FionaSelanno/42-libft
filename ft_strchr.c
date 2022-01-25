/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:16:50 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/07 16:23:32 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0' && *str == c)
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
//if c == '\0' the functions locates the terminating '\0'
int	main(void)
{
	char str[] = "example";
	char c = 'a';
	char c2 = 'b';
	char c3 = '\0';
	printf("----test with matching char in str----\n");
	printf("MINE: %s\n", ft_strchr(str, c));
	printf("OR: %s\n", strchr(str, c));
	printf("----test without matching char in str----\n");
	printf("MINE: %s\n", ft_strchr(str, c2));
	printf("OR: %s\n", strchr(str, c2));
	printf("----test with c equals to terminating null----\n");
	printf("MINE: %s\n", ft_strchr(str, c3));
	printf("OR: %s\n", strchr(str, c3));
}
*/
