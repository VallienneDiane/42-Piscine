/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:12:29 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/20 19:28:44 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 1;
		while (base[i + j])
		{
			if (base[i] == base[i + j])
				return (0);
			j++;
		}
		while (base[i] == '+' || base[i] == '-' || base[i] == 32)
			return (0);
		i++;
	}
	return (i);
}

int	ft_get_index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	sign;
	int	result;

	i = 0;
	count = 0;
	sign = 1;
	result = 0;
	if (ft_check_base(base) == 0)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			count++;
	}
	if (count % 2 == 1)
		sign = -sign;
	while (ft_get_index_base(str[i], base))
		result = result * ft_strlen(base) + ft_get_index_base(str[i++], base);
	return (result * sign);
}
