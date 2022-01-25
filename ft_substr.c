/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:09:51 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/11 16:49:51 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	substr = malloc(sizeof(*substr) * len + 1);
	if (!substr)
		return (NULL);
	if (start >= ft_strlen(s))
		substr[0] = '\0';
	else
	{
		while (len > 0)
		{
			substr[i++] = s[start++];
			len--;
		}
		substr[i] = '\0';
	}
	return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "create a substring from this string";
	printf("%s\n", ft_substr(str, 9, 6));

	char str1[] = "create";
	printf("%s\n", ft_substr(str1, 9, 6));
}i
*/
