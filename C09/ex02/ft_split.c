/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:29:15 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 12:24:25 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_check_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_tab_word(char *str, char *tab, int count_caracter, int i)
{
	int	a;
	int	index;

	if (count_caracter > 0)
	{
		tab = malloc(sizeof(char) * (count_caracter + 1));
		a = 0;
		index = i - count_caracter;
		while (a < count_caracter && str[index + a])
		{
			tab[a] = str[index + a];
			a++;
		}
		tab[a] = '\0';
	}
	return (tab);
}

void	ft_check_word(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	count_caracter;

	i = 0;
	j = 0;
	count_caracter = 0;
	while (str[i])
	{
		if (ft_check_charset(str[i], charset) == 0)
			count_caracter++;
		else if (count_caracter > 0 || !str[i])
		{
			tab[j] = ft_tab_word(str, tab[j], count_caracter, i);
			count_caracter = 0;
			j++;
		}
		i++;
	}
	tab[j] = ft_tab_word(str, tab[j], count_caracter, i);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;
	int	count_word;

	i = 0;
	count = 0;
	count_word = 0;
	while (str[i])
	{
		if (ft_check_charset(str[i], charset) == 0)
			count++;
		else if (count > 0)
		{
			count_word++;
			count = 0;
		}
		i++;
	}
	if (count > 0)
		count_word++;
	return (count_word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		word_index;

	word_index = ft_count_word(str, charset);
	tab = malloc(sizeof (char *) * (word_index + 1));
	if (!tab)
		return (0);
	tab[word_index] = 0;
	ft_check_word(str, charset, tab);
	return (tab);
}
