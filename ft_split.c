/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:33:50 by fiselann          #+#    #+#             */
/*   Updated: 2022/01/28 11:12:45 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tabsize(char const *s, char c)
{
	size_t	count_words;
	size_t	i;

	i = 0;
	count_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			count_words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count_words);
}

void	*ft_leakfix(void *tab)
{
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
			if (tab[i_tab] == NULL)
				return (ft_leakfix(tab[i_tab]));
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
		return (ft_leakfix(*tab));
	else
		(ft_filltab(tab, s, c));
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
	char str[] = ".some...text.to.split";
	char c = '.';
	print_tab(ft_split(str, c));
	char *str1 = "\0aa\0bb";
	char c1 = '\0';
	print_tab(ft_split(str1, c1));
}
*/
