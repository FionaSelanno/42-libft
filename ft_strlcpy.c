/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:25:44 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/07 13:19:38 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{	
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>
//dstsize is size of src, return value is size of src
//be aware that size need to have space for the terminating '\0'
//Room for NUL-termination should be included (dstsize - 1 in while)
//return type size_t is unsigned long 
int	main(void)
{
char dst[] = "Hello";
char src[] = "world";
printf("MINE: return value = %zu | dst = %s\n", ft_strlcpy(dst, src, 5), dst);

char dst1[] = "Hello";
char src1[] = "world";
printf("OR: return value = %zu | dst = %s\n", strlcpy(dst1, src1, 5), dst1);
return (0);
}
*/
