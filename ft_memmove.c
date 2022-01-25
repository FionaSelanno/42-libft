/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:28:14 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 15:43:59 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{

	if (dst == src)
		return dst;
	else if ((size_t)dst -  (size_t)src < len) //it compares the adress of the pointers; *dst > *src compares the chars where it points to
	{
		printf("src before: %s\n", src);
		printf("dst before: %s\n", dst);

			src = src + len - 1;
			dst = dst + len -1;
		printf("src after, start copying from this point: %s\n", src);
		printf("dst after: %s\n", dst);
			while (len > 0)
			{
				*(char *)dst= *(char *)src;
				dst--;
				src--;
				len--;
			}
			return (dst);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (dst);
	}
}

//The 2 strings may overlap: when dst - src < len, copying is done from right to left. from the moment the ovelapping begins
#include <stdio.h>
#include <string.h>
int	main(void)
{
	printf("TEST WITH BASIC INPUT:\n");
	char dst[] = "testing";
	char src[] = "done";
	char dst1[] = "testing";
	char src1[] = "done";
	printf("MINE: %s\n", ft_memmove(dst, src, sizeof(char)*3));
	printf("OR: %s\n", memmove(dst1, src1, sizeof(char)*3));
	printf("TEST WITH STRING OVERLAP");
	char str[100] = "Learningisfun";
	char str1[100] = "Learningisfun";
    char *first, *second, *first1, *second1;
    first = str;
    second = str;
	first1 = str1;
	second1 = str1;
    printf("Original string :%s\n", str1);
    // when overlap it start from first position
    ft_memmove(second + 8, first, 10);
    printf("MINE: memmove overlap : %s\n", str);
    memmove(second1 + 8, first1, 10);
    printf("OR: memmove overlap : %s\n", str1);
}

