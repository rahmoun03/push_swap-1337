/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 09:15:42 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 09:48:46 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(char *s, char c)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			word++;
		i++;
	}
	return (word);
}

static int	ft_is_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static void	ft_alocate(char **tab, char *s, char c, int w)
{
	int	i;
	int	a;
	int	j;

	i = 0;
	j = 0;
	a = 0;
	while (j < w)
	{
		i = 0;
		while (ft_is_sep(s[a], c))
			a++;
		while (ft_is_sep(s[a + i], c) == 0)
		{
			if (ft_is_sep(s[a + i + 1], c) || s[a + 1 + i] == '\0')
			{
				i++;
				tab[j] = (char *)malloc(i + 1);
				a = a + i;
				break ;
			}
			i++;
		}
		j++;
	}
}

static void	ft_fill_split(char **tab, char *s, char c)
{
	int	i;
	int	j;
	int	a;
	int	skip;

	j = 0;
	i = 0;
	skip = 0;
	while (tab[j])
	{
		a = 0;
		while (ft_is_sep(s[i + skip], c) && s[i])
			skip++;
		if (!ft_is_sep(s[i + skip], c) && s[i])
		{
			while (!ft_is_sep(s[i + skip], c) && s[i + skip])
			{
				tab[j][a] = s[i + skip];
				i++;
				a++;
			}
			tab[j][a] = '\0';
		}
		j++;
	}
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		total_words;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	total_words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (total_words + 1));
	if (!tab)
		return (NULL);
	tab[total_words] = NULL;
	ft_alocate(tab, s, c, total_words);
	ft_fill_split(tab, s, c);
	return (tab);
}
