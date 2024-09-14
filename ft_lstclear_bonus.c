/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youbrhic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:00:19 by youbrhic          #+#    #+#             */
/*   Updated: 2023/11/03 17:13:13 by youbrhic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		l = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = l;
	}
	*lst = NULL;
}
