/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:18:01 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/16 17:38:51 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				count = av[1][i] - 64;
			}
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				count = av[1][i] - 96;
			}
			while (count)
			{
				write (1, &av[1][i], 1);
				count--;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}

