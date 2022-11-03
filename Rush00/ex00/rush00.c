/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 21:10:39 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/05 09:47:52 by dvallien         ###   ########lyon.fr   */
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
			ft_putchar('o');
		while (i > 1 && i < xmax)
		{
			ft_putchar('-');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('o');
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
			ft_putchar('|');
		while (i > 1 && i < xmax)
		{
			ft_putchar(' ');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('|');
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
			ft_putchar('o');
		while (i > 1 && i < xmax)
		{
			ft_putchar('-');
			i++;
		}
		if (i == xmax && xmax != 1)
			ft_putchar('o');
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
