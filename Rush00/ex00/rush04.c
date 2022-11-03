/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 21:10:39 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/05 15:24:08 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int xmax)
{
	int	i;

	i = 0;
	while (i < xmax)
	{
		i++;
		if (i == 1)
			ft_putchar('A');
		while (i > 1 && i < xmax)
		{
			ft_putchar('B');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('C');
	}
	ft_putchar('\n');
}

void	middle(int xmax)
{
	int	i;

	i = 0;
	while (i < xmax)
	{
		i++;
		if (i == 1)
			ft_putchar('B');
		while (i > 1 && i < xmax)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('B');
	}
	ft_putchar('\n');
}

void	lastline(int xmax)
{
	int	i;

	i = 0;
	while (i < xmax)
	{
		i++;
		if (i == 1)
			ft_putchar('C');
		while (i > 1 && i < xmax)
		{
			ft_putchar('B');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('A');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	firstline (x);
	while (y - 1 > 1)
	{
		middle (x);
		y--;
	}
	lastline (x);
	ft_putchar('\n');
}
