/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:47:24 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/16 16:04:07 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i] || !s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
}

void	ft_sort_char_tab(char **av, int size)
{
	int		i;
	int		count;
	char	*temp;

	i = 1;
	count = 1;
	while (count > 0)
	{
		i = 1;
		count = 0;
		while (i < size - 2)
		{
			if (ft_strcmp(av[i], av[i + 1]) < 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				count++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	argc = 1;
	while (argv[j])
	{
		argc++;
		j++;
	}
	ft_sort_char_tab(argv, argc);
	while (j > 1)
	{
		j--;
		ft_putstr(argv[j]);
		write (1, "\n", 1);
	}
}
