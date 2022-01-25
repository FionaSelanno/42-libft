/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:50:33 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/11 17:32:48 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoined;
	int		len_strjoined;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len_strjoined = ft_strlen(s1) + ft_strlen(s2);
	strjoined = malloc(sizeof(*strjoined) * len_strjoined + 1);
	if (!strjoined)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		strjoined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		strjoined[i++] = s2[j++];
	strjoined[i] = '\0';
	return (strjoined);
}
/*
#include <stdio.h>
int	main(void)
{
	char *s1 = "joined";
	char *s2 = " strings";
	printf("%s\n", ft_strjoin(s1, s2));
}i
*/
