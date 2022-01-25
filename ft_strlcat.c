/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:58:17 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/07 16:26:18 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize < dst_len || dstsize == 0)
		return (src_len + dstsize);
	while (src[i] && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest1[100] = "hall";
	char dest2[100] = "hall";
	char src1[] = "";
	char src2[] = "";
	printf("----test 1----\n");
	printf("MINE: ret val: %lu | dst: %s\n", ft_strlcat(dest1, src1, 0), dest1);
	printf("OR: ret val:  %lu | dst: %s\n", strlcat(dest2, src2, 0), dest2);
	printf("----test 2----\n");
	printf("MINE: ret val: %lu | dst: %s\n", ft_strlcat(dest1, src1, 6), dest1);
	printf("OR: ret val:  %lu | dst: %s\n", strlcat(dest2, src2, 6), dest2);
	return (0);
}
*/
