/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:52:49 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/08 10:52:50 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;

	if (!(*lst))
		return ;
	if (del)
	{
		while (*lst)
		{
			del((*lst)->content);
			tmp = (*lst);
			*lst = (*lst)->next;
			free(tmp);
		}
	}
	*lst = NULL;
}
