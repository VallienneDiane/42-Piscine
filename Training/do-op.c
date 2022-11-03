/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:10:11 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/23 15:30:41 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int result;
	int a;
	int b;
	char op;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result == a % b;
		printf("%d\n", result);
		return (0);
	}
	else
		write (1, "\n", 1);
	return (0);
}

