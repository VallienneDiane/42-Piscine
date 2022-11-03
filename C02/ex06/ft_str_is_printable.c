/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:03:27 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/09 10:14:05 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (src[i] < 32 || src[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}