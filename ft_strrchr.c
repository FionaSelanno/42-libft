/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:29:13 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/10 11:08:32 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	strlen;

	strlen = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + strlen));
	while (strlen > 0)
	{
		if (str[strlen - 1] == c)
			return ((char *)(str + strlen - 1));
		strlen--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char str[] = "find matching char in  matching char";
	char c = 'a';
	char c1 = 'd';
	char c2 = '\0';
	printf("---test with more matching char---\n");
	printf("MINE: %s\n", ft_strrchr(str, c));
	printf("OR: %s\n", strrchr(str, c));
	printf("---test with one matching char---\n");
	printf("MINE: %s\n", ft_strrchr(str, c1));
	printf("OR: %s\n", strrchr(str, c1));
	printf("---test with matching ending '0'\n");
	printf("MINE: %s\n", ft_strrchr(str, c2));
	printf("OR: %s\n", strrchr(str, c2));
	printf("---test with nog match---\n");
	printf("MINE: %s\n", ft_strrchr(str, c2));
	printf("OR: %s\n", strrchr(str, c2));
}i
*/
