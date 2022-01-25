/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:26:44 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/07 08:26:54 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	if (n == 0)
		return ;
	while (n > 0)
	{	
		*str++ = '\0';
		n--;
	}
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char *str;
	char *str1;

	str = strdup("Hello");
	str1 = strdup("Hello");

	ft_bzero(str + 2, 0);
	bzero(str1 + 2, 0);
	//n = 0 does should not change str / str1
	printf("MINE: %s\n", str);
	printf("OR: %s\n", str1);
	ft_bzero(str + 2, 4);
	bzero(str1 + 2, 4);
	printf("MINE: %s\n", str);
	printf("OR: %s\n", str1);
}
*/
