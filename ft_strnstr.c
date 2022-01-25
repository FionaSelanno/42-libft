/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 16:24:01 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/11 11:20:08 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (j + i) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[] = "Hallo be HI hi bey";
	char str2[] = "be";
	printf("MINE: %s\n", ft_strnstr(str1, str2, 9));
	printf("OR: %s\n", strnstr(str1, str2, 9));
	printf("MINE: %s\n", ft_strnstr(str1, str2, 6));
	printf("OR: %s\n", strnstr(str1, str2, 6));
	char str3[] = "Hallo be HI hi bey";
	char str4[] = "Hallo";
	printf("MINE: len < strlen(needle): %s\n", ft_strnstr(str3, str4, 4));
	printf("OR:, len < strlen(needle): %s\n", strnstr(str3, str4, 4));
	char str5[] = "";
	char str6[] = "Bey";
	printf("MINE: haystack is empty: %s\n", ft_strnstr(str5, str6, 8));
	printf("OR: haystack is empty: %s\n", strnstr(str5, str6, 8));
}
*/
