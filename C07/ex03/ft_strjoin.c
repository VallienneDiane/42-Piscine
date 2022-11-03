/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:06:03 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/20 18:48:37 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_join_with_sep(int size, char *dest, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_size;
	char	*dest;
	int		j;

	dest = 0;
	j = 0;
	while (sep[j])
		j++;
	full_size = size + j;
	dest = malloc(sizeof(char) * (full_size + 1));
	if (size == 0)
		return ("");
	ft_join_with_sep(size, dest, strs, sep);
	return (dest);
}

void	ft_join_with_sep(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			dest[a++] = sep[j++];
		i++;
	}
	dest[a] = '\0';
}
