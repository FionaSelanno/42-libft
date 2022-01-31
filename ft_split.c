/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:33:50 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/28 13:06:20 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_tabsize(char const *s, char c)
{
	size_t	count_words;
	size_t	i;
	size_t	toggle;

	i = 0;
	count_words = 0;
	while (s[i])
	{
		if (s[i] != c && toggle == 0)
		{
			toggle = 1;
			count_words++;
		}
		else if (s[i] == c)
			toggle = 0;
		i++;
	}
	printf("count_word: %zu\n", count_words);
	return (count_words);
}

void	*ft_leakfix(char **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

void	*ft_filltab(char **tab, char const *s, char c)
{
	size_t	i_s;
	size_t	i_tab;
	size_t	lenword;

	i_s = 0;
	i_tab = 0;
	while (s[i_s])
	{
		while (s[i_s] == c)
			i_s++;
		lenword = 0;
		while (s[i_s] && s[i_s] != c)
		{
			lenword++;
			i_s++;
		}
		if (lenword > 0)
		{
			tab[i_tab++] = ft_substr(s, (i_s - lenword), lenword);
			if (tab[i_tab - 1] == NULL)
				return (ft_leakfix(tab, i_tab - 1));
		}
	}
	tab[i_tab] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_tabsize(s, c)) + 1);
	if (!tab)
		return (NULL);
	ft_filltab(tab, s, c);
	return (tab);
}
/*
#include <stdio.h>
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
	printf("***test1***\n");
	char str[] = ".some...text.to.split";
	char c = '.';
	print_tab(ft_split(str, c));
	printf("***test2***(will return nothing)\n");
	char *str1 = "\0aa\0bb";
	char c1 = '\0';
	print_tab(ft_split(str1, c1));
	printf("***test3***\n");
	char str2[] = "testingthis ";
	char c2 = ' ';
	print_tab(ft_split(str2, c2));
}
*/
