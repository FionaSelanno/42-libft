/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:38:17 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/04 16:50:09 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*a;

	a = (unsigned char *) ptr;
	while (len > 0)
	{
		*a++ = (unsigned char) c;
		len--;
	}
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str;
	char *str1;

	str = strdup("Hello World");
	str1 = strdup("Hello World");
	ft_memset(str + 4, '.', 3*sizeof(char));
	memset(str1 + 4, '.', 3*sizeof(char));
	printf("Mine: %s\n", str);
	printf("OR: %s\n", str1);
	return (0);
}
*/
