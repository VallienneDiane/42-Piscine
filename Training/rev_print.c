/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:41:35 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/16 18:26:03 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		write (1, &src[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;
	int len;
	char temp;

	i = 0;
	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		len--;
		while (i < len)
		{
			temp = av[1][i];
			av[1][i] = av[1][len];
			av[1][len] = temp;
			i++;
			len--;
		}
		ft_putstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}

