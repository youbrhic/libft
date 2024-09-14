/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 03:02:00 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/01 16:05:06 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if ((!dest || ! src) && !size)
		return (0);
	while (dest[j] && j < size)
		j++;
	while (src[i] && size && (j + i) < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (j < size)
		dest[j + i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (j + i);
}
