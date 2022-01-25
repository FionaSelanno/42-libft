/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:42:19 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 13:20:58 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:27:18 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 11:40:35 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_conv;
	char	*src_conv;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_conv = (char *)dst;
	src_conv = (char *)src;
	while (n > 0)
	{
		*(dst_conv++) = *(src_conv++);
		n--;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "hi";
	char dst1[] = "hi";
	char src[]= "Hello";

	ft_memcpy(dst, src, 3);
	memcpy(dst1, src, 3);
	printf("MINE: %s\nOR: %s\n", dst, dst1);

	char destsrc[100] = "Geeksfor";
	char destsrc1[100] = "Geeksfor";
	printf("destrc: %s\n", destsrc + 5);
	ft_memcpy(destsrc + 5, destsrc, strlen(destsrc) + 1);


	memcpy(destsrc + 5, destsrc1, strlen(destsrc) + 1);
	printf("Mine: %s\nOR: %s\n", destsrc, destsrc1);

	char str[100] = "Learningisfun";
	char str1[100] = "Learningisfun";
    char *first, *second, *first1, *second1;
    first = str;
    second = str;
	first1 = str1;
	second1 = str1;
    printf("Original string :%s\n ", str1);

    // when overlap happens then it just ignore it
    ft_memcpy(first + 8, first, 10);
    printf("MINE: memcpy overlap : %s\n ", str);
    memcpy(first1 + 8, first1, 10);
    printf("OR: memcpy overlap : %s\n ", str1);

    // when overlap it start from first position
    ft_memmove(second + 8, first, 10);
    printf("MINE: memmove overlap : %s\n ", str);
    memmove(second1 + 8, first1, 10);
    printf("OR: memmove overlap : %s\n ", str1);

    return 0;
}*/
