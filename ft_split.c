/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 22:18:42 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/02 18:00:34 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

static char	*ft_strndup(const char *s1, int n)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(n + 1);
	if (new == NULL)
		return (NULL);
	while (i < n)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

static char	**free2d(char **arr, int index)
{
	int	i;

	i = 0;
	while (index - i >= 0)
	{
		free(arr[index - i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	int		tail_matrice;
	char	**arr;

	tail_matrice = count_words(s, c);
	index = -1;
	arr = (char **)malloc((sizeof(char *)) * (tail_matrice + 1));
	if (!arr || !s)
		return (NULL);
	while (++index < tail_matrice)
	{
		i = 0;
		while (*s && *s == c)
			s++;
		while (*(s + i) != c && *(s + i))
			i++;
		arr[index] = ft_strndup(s, i);
		if (arr[index] == NULL)
			return (free2d(arr, index));
		while (*s && *s != c)
			s++;
	}
	arr[index] = NULL;
	return (arr);
}
/*
#include <stdio.h>
int main(int ac , char **av)
{
	char **p;
	int		i;

	p = ft_split(av[1],av[2][0]);
	i = 0;
	while (av[i])
	{
		printf("%s \n",p[i]);
		i++;
	}
}*/
