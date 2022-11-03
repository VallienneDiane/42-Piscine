/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 11:52:23 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/17 12:13:23 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j])
		{
			j++;
			if (str[i] == str[i + j])
				return (0);
		}
		if (str[i] == '+' || str[i] == '-' || str[i] == 32)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_recursive(char *base, long nbr, int size_base)
{
	int	nbr_div;

	if (nbr >= size_base)
	{
		nbr_div = nbr / size_base;
		ft_recursive(base, nbr_div, size_base);
	}
	ft_putchar(base[nbr % size_base]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size_base;
	long	nbr_long;

	nbr_long = (long)nbr;
	size_base = ft_strlen(base);
	if (nbr_long < 0 && size_base != 0)
	{
		nbr_long = -nbr_long;
		write(1, "-", 1);
	}
	if (size_base == 1 || base == '\0' || size_base == 0)
		return ;
	ft_recursive(base, nbr_long, size_base);
}
