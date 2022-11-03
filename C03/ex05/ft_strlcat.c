/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvallien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:16:59 by dvallien          #+#    #+#             */
/*   Updated: 2021/09/11 20:40:38 by dvallien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	j = 0;
	src_size = ft_str_len(src);
	dest_size = ft_str_len(dest);
	if (size == 0 || size < dest_size)
		return (src_size + size);
	if (src_size == 0)
		return (dest_size);
	while (dest[i])
	{
		i++;
	}
	while (src[j] && dest_size + j < size - 1)
	{
		dest[dest_size + j] = src[j];
		j++;
	}
	dest[dest_size + j] = '\0';
	return (src_size + dest_size);
}
