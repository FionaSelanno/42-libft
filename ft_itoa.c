#include "libft.h"
#include <stdio.h>

int	ft_len_result(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
		n = -n;
	while ((n /= 10))
		len++;
	return (len + 1); //+1 for numbers 0 - 9
}

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

	result = malloc(sizeof(char) * ft_len_result(n) + 1);
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

/*
int	main(void)
{
	int	num = 10;
	int	num1 = 7364973;
	int	num2 = -2147483648;
	int	num3 = 2147483647;
	
	printf("len num: %d\n", ft_len_result(num));
	printf("len num1: %d\n", ft_len_result(num1));
	printf("len num2: %d\n", ft_len_result(num2));
	printf("len num3: %d\n", ft_len_result(num3));
	printf("num: %s\n", ft_itoa(num));
	printf("num1: %s\n", ft_itoa(num1));
	printf("num2: %s\n", ft_itoa(num2));
	printf("num3: %s\n", ft_itoa(num3));
}*/
