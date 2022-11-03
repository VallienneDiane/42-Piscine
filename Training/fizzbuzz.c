/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:43:31 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 17:28:09 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nbr)
{
	unsigned int n;

	if (nbr > 9)
		ft_putnbr(nbr / 10);
	n = nbr % 10;
	ft_putchar(n + '0');
}

void fizzbuzz(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 5 == 0 && nbr % 3 == 0)
			write (1, "fizzbuzz\n", 9);
		else if (nbr % 3 == 0)
			write (1, "buzz\n", 5);
		else if (nbr % 5 == 0)
		{
			write (1, "fizz", 5);
			if (nbr != 100)
				write (1, "\n", 1);
		}
		else
		{
			ft_putnbr(nbr);
			write (1, "\n", 1);
		}
		nbr++;
	}
	write (1, "\n", 1);
}

int main(void)
{
	fizzbuzz();
	return (0);
}
