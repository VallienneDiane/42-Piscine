/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:14:15 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 19:22:17 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i] || !s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main(void)
{
	printf("%d\n",ft_strcmp("Allz", "Allz"));
}
