/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:00:33 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 16:10:20 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_len_result(int n)
{
	int	len;
	len = 0;
	if (n < 0)
		len++;
		n = -n;
	if (n == 0)
		len++;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	printf("len: %d\n", len);
	return (len);
}

//this function was only useful when  n == -2147483648. This is already taken care in ft_putnbr_itoa 
/*char	*ft_strcpy(char *dst, const char *src)
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
}*/

int	ft_putnbr_itoa(unsigned int n, char *result, int i_result)
{
	if (n >= 10)
	{
		i_result = ft_putnbr_itoa(n / 10, result, i_result);
		i_result = ft_putnbr_itoa(n % 10, result, i_result);
	}
	else
	{
		result[i_result] = (n + '0');
		i_result++;
	}
	return (i_result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int	i_result;

	result = malloc(sizeof(*result) * ft_len_result(n) + 1);
	if (!result)
		return (NULL);
	//next if condition is not needed anymore because the ft_putnbr_itoa takes an unisgned int
	//if (n == -2147483648) 
	//	return (ft_strcpy(result, "-2147483648"));
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
		i_result = ft_putnbr_itoa(n, result, 1); //start filling result at index 1
	}
	else
		i_result = ft_putnbr_itoa(n, result, 0);
	result[i_result] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("result: %s\n", ft_itoa(2147483648));
}
*/
