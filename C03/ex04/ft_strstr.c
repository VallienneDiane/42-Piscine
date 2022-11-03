/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:14:04 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/09 17:13:42 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char*tofind)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tofind[j] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == tofind[j])
		{
			if (tofind[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
