/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 04:59:08 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/03 05:27:19 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*v;

	v = (char *)malloc(count * size);
	if (!v)
		return (NULL);
	ft_bzero(v, count * size);
	return (v);
}
/*
int main()

printf("%s\n",(char *)ft_calloc(1, 0));
printf("%s\n",(char *)calloc(1, 0));
}*/
