#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]); //also works with f(i, s + i)
		i++;
	}	
}
/*
void	f(unsigned int i, char *str)
{
	printf("string: %s | index: %u\n ", str, i);
}

int	main(void)
{
	ft_striteri("some text here", f);
}
*/
