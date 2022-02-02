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
	if (start >= ft_strlen(s)) //then there is no char's to substitute
		len = 0;
	if (ft_strlen(&s[start]) < len) //in case off the length of the string to substitute is smaller then te given len
 		len = ft_strlen(&s[start]);
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

	// in case of start being higher then ft_strlen(s)
	char str1[] = "create";
	printf("%s\n", ft_substr(str1, 9, 6));

	//in case of the length of the substring is smaller then then len argument	
	char str2[] = "something";
	printf ("test3: %s\n", ft_substr(str2, 3, 8));
}
*/
