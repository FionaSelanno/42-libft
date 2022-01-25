#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy_s1_trimmed;
	size_t	start;
	size_t	end;
	size_t	i_cpy;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i_cpy = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
 	while (end > start && ft_strchr(set, s1[end -1]))
		end--;
	cpy_s1_trimmed = malloc(sizeof(char) * (end - start) + 1);
	if (!cpy_s1_trimmed)
		return (NULL);
	while (start < end)
		cpy_s1_trimmed[i_cpy++] = s1[start++];
	cpy_s1_trimmed[i_cpy] = '\0';
	return (cpy_s1_trimmed);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "endlook for a char in a strend";
	char	s2[] = "end";
	printf("%s\n", ft_strtrim(s1, s2));
	char	s3[] = "endlook for a char in a strend";
	char	s4[] = "";
	printf("%s\n", ft_strtrim(s3, s4));
	char	s5[] = "endlook for a char end in a";
	char	s6[] = "end";
	printf("%s\n", ft_strtrim(s5, s6));
}
*/
