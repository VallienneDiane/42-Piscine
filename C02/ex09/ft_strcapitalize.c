/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:48:51 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/08 16:36:11 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	check_numeric_alpha(char *c)
{
	int	count;

	count = 0;
	if (*c < '0' || *c > '9')
		count++;
	if (*c < 'a' || *c > 'z')
		count++;
	if (*c < 'A' || *c > 'Z')
		count++;
	if (count == 3)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (check_numeric_alpha(&str[i - 1]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
