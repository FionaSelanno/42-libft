#include "libft.h"
#include <stdio.h>

int	ft_tabsize(char const *s, char c)
{
	size_t	count_words;
	size_t	i;

	i = 0;
	count_words = 0;
	while(s[i])
	{
		if (s[i] == c)
			count_words++;
		s++;
	}
	printf("words: %zu\n", count_words);
	return (count_words + 1);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i_tab;
	size_t	i;
	size_t	i_nextword;

	if (!s)
		return (NULL);;
	printf("begin ft_split\n");
	tab = malloc(sizeof(*tab) * ft_tabsize(s, c) + 1);
	printf("malloc?\n");
	if (!tab)
		return (NULL);
	i = 0;
	i_tab = 0;
	i_nextword = 0;
	while (i <= ft_strlen(s))
	{
		while (s[0] == c)
			s++;
		while (s[i] != c)
			i++;
		//printf("still ok?\n");
		if (s[i] == c)
		{
			//printf("in if\n");
			tab[i_tab] = ft_substr(s, i_nextword, (i - i_nextword));
			//printf("string: %s\n", s);
			//printf("i: %zu\n", i);
			//printf("nextword: %zu\n", i_nextword);
			//printf("substr: %s\n", ft_substr(s, i_nextword, (i - i_nextword)));
			i_nextword = ++i;
			i_tab++;
		}
	}
	tab[i_tab] = 0;
	return (tab);
}

void	print_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	char str[] = "some.text.to.split";
	char c = '.';
	print_tab(ft_split(str, c));
	char *str1 = "\0aa\0bb";
	char c1 = '\0';
	print_tab(ft_split(str1, c1));
}*/
