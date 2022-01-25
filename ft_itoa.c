/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:00:33 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 16:05:00 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_len_result(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
		n = -n;
	while ((n /= 10))
		len++;
	return (len + 1);
}*/

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char *ft_itoa(int n)
{
	char	*result;

	result = malloc(sizeof(char) * 2); 
	//only allocate space for 2 chars: the current char and '\0', Therefor ft_len_result(int); is not needed.
	if (!result)
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(result, "-2147483648"));
	if (n < 0)
	{
		result[0] = '-';
		result[1] = '\0';
		n = -n;
		result = ft_strjoin(result, ft_itoa(n));
	}
	else if (n >= 10)
	{
		result = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	}
	else
	{
		result[0] = n + 48;
		result[1] = '\0';
	}
	return (result);
}
