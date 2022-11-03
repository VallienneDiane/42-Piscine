/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastword.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 22:55:19 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 12:43:19 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int i;
	char *lw;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] && av[1][i] > 32)
		{
			lw = &av[1][0];
			i++;
		}
		while (av[1][i])
		{
			if (av[1][i] <= 32 && av[1][i + 1] > 32)
				lw = &av[1][i + 1];
			i++;
		}
		i = 0;
		while (lw && lw[i] > 32)
		{
			write (1, &lw[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
