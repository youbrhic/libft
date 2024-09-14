/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:26:45 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/03 05:14:36 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;

	p = (unsigned char *)src;
	q = (unsigned char *)dst;
	if (p == q)
		return (dst);
	while (n)
	{
		*q = *p;
		p++;
		q++;
		n--;
	}
	return (dst);
}
