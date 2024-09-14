/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:16:25 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/02 15:22:56 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*t;
	unsigned int	l;
	size_t			buff;

	if (!s)
		return (NULL);
	l = (unsigned int)ft_strlen((char *)s);
	i = 0;
	if (start >= l)
		return (ft_strdup(""));
	if (len > l - start)
		buff = l - start;
	else
		buff = len;
	t = (char *)malloc((buff + 1) * sizeof(char));
	if (!t)
		return (NULL);
	while (i < len && *(s + start + i))
	{
		*(t + i) = *(s + start + i);
		i++;
	}
	*(t + i) = '\0';
	return (t);
}
