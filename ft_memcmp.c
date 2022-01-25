/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 15:23:37 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/10 16:14:09 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
//cast to unsigned char *. See man.
int	main(void)
{
	char str1[] = "hallo";
	char str2[] = "hello";

	printf("MINE - should return 0: %d\n", ft_memcmp(str1, str2, 0));
	printf("OR should return 0: %d\n", memcmp(str1, str2, 0));
	printf("MINE - should return 0: %d\n", ft_memcmp(str1, str2, 1));
	printf("OR should return 0: %d\n", memcmp(str1, str2, 1));
	printf("MINE - should return neg: %d\n", ft_memcmp(str1, str2, 2));
	printf("OR should return neg: %d\n", memcmp(str1, str2, 2));
	char str3[] = "adcde";
	char str4[] = "";
	printf("MINE - should return pos,: %d\n", ft_memcmp(str3, str4, 2));
	printf("OR - should return pos: %d\n", memcmp(str3, str4, 2));
	char str5[] = "abcd";
	char str6[] = "abcd";
	printf("MINE - should return nul: %d\n", ft_memcmp(str5, str6, 3));
	printf("OR - should return nul: %d\n", memcmp(str5, str6, 3));
	char str7[] = "";
	char str8[] = "abcd";
	printf("MINE - should return neg: %d\n", ft_memcmp(str7, str8, 4));
	printf("OR - should return neg: %d\n", memcmp(str7, str8, 4));

*/
