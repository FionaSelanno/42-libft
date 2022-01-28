/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:28:14 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/28 15:39:20 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_cast;
	unsigned char	*src_cast;

	dst_cast = (unsigned char *)dst;
	src_cast = (unsigned char *)src;
	if (dst_cast == src_cast)
		return (dst_cast);
	else if (src_cast < dst_cast)
	{
		src_cast = src_cast + len - 1;
		dst_cast = dst_cast + len - 1;
		while (len > 0)
		{
			*(dst_cast--) = *(src_cast--);
			len--;
		}
		return (dst_cast + 1);
	}
	else
	{
		ft_memcpy(dst_cast, src_cast, len);
		return (dst);
	}
}
