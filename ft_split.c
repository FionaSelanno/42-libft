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
		while(s[i] == c)
			i++;
		if (s[i] != c) //first letter of word is encountered
			count_words++;
		while(s[i] && (s[i] != c)) //skip the next letter off the same word.
			i++;
	}
	return (count_words);
}


char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i_tab;
	size_t	i;
	size_t	lenword;

	if (!s)
		return (NULL);;
	tab = malloc(sizeof(char *) * (ft_tabsize(s, c)) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	i_tab = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		lenword = 0;
		while (s[i] && s[i]!= c)
		{
			lenword++;
			i++;
		}
		if (lenword > 0) //meaning there is a word
		{
			tab[i_tab++] = ft_substr(s, (i - lenword), lenword); //i - lenword is the starting position to make a substr
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

int	main(void)
{
	char str[] = ".some...text.to.split";
	char c = '.';
	print_tab(ft_split(str, c));
	char *str1 = "\0aa\0bb";
	char c1 = '\0';
	print_tab(ft_split(str1, c1));
}
