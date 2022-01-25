/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:11:01 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/10 16:21:32 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1_conv;
	unsigned char	*str2_conv;

	i = 0;
	str1_conv = (unsigned char *)str1;
	str2_conv = (unsigned char *)str2;
	while (str1_conv[i] || str2_conv[i])
	{
		if (str1_conv[i] != str2_conv[i] && i < n)
			return (str1_conv[i] - str2_conv[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
//comparison is done using unsigned chars. See man.
//size_t aka unsigned long, thats why i is an unsigned int
int	main(void)
{
	char str1[] = "hallo";
	char str2[] = "hello";

	printf("MINE - should return 0: %d\n", ft_strncmp(str1, str2, 0));
	printf("OR should return 0: %d\n", strncmp(str1, str2, 0));
	printf("MINE - should return 0: %d\n", ft_strncmp(str1, str2, 1));
	printf("OR should return 0: %d\n", strncmp(str1, str2, 1));
	printf("MINE - should return neg: %d\n", ft_strncmp(str1, str2, 2));
	printf("OR should return neg: %d\n", strncmp(str1, str2, 2));
	char str3[] = "adcde";
	char str4[] = "";
	printf("MINE - should return pos,: %d\n", ft_strncmp(str3, str4, 2));
	printf("OR - should return pos: %d\n", strncmp(str3, str4, 2));
	char str5[] = "abcd";
	char str6[] = "abcd";
	printf("MINE - should return nul: %d\n", ft_strncmp(str5, str6, 3));
	printf("OR - should return nul: %d\n", strncmp(str5, str6, 3));
	char str7[] = "";
	char str8[] = "abcd";
	printf("MINE - should return neg: %d\n", ft_strncmp(str7, str8, 4));
	printf("OR - should return neg: %d\n", strncmp(str7, str8, 4));
}
*/
