/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 09:43:16 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/20 18:49:06 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	len;

	i = 0;
	len = max - min;
	tab = malloc(sizeof(*tab) * len);
	if (min >= max)
		return (0);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
	if (!range)
	{
		return (-1);
	}
}
