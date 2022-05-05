/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:52:07 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/08 13:42:08 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *begin;

	if (!(*alst))
	{
		(*alst) = new;
		return ;
	}
	begin = (*alst);
	while (begin->next)
		begin = begin->next;
	begin->next = new;
}
