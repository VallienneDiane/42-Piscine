/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:05:06 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 12:22:12 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac > 1)
	{
		ac--;
		while (av[ac][i])
		{
			write (1, &av[ac][i], 1);
			i++;
		}
		write (1, "\n", 1);
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}