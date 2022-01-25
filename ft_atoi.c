/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:33:51 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/25 17:34:10 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#define LLMAX 9223372036854775807ull

static int	check_limits(unsigned long long nb, int neg)
{
	if (nb >= LLMAX && neg == 1)
		return (-1);
	if (nb >= LLMAX + 1 && neg == -1)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	nb;
	int					neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	if (check_limits(nb, neg) == -1 || check_limits(nb, neg) == 0)
		return (check_limits(nb, neg));
	return (nb * neg);
}
/*
 * LLMAX is max value of unsigned long long
#include <stdio.h>
int	main(void)
{
	char *str = "18446744073709551615";
	printf("result MINE: %d | OR: %d\n", atoi(str), ft_atoi(str));
}
*/
