/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:55:54 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/12 16:08:30 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s1;

	if (!dst && !src)
		return (NULL);
	s1 = (char *)dst;
	while (n)
	{
		*s1 = *(char *)src;
		n--;
		src++;
		s1++;
	}
	return (dst);
}
