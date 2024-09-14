/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstite_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:14:05 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/03 17:21:47 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list		*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}
