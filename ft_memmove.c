/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:28:14 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 11:12:20 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*buf;

	if (dst == NULL || src == NULL)
		return (NULL);
	buf = (char *)malloc(sizeof(*buf) * len);
	if (!buf)
		return (NULL);
	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	free(buf);
	return (dst);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dst[] = "testing";
	char src[] = "done";
	char dst1[] = "testing";
	char src1[] = "done";
	printf("MINE: %s\n", ft_memmove(dst, src, sizeof(char)*8));
	printf("OR: %s\n", memmove(dst1, src1, sizeof(char)*8));
}

