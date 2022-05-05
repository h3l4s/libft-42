/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:59:39 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/08 17:23:05 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	b;
	unsigned char	*str2;
	int				i;

	str = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (*str)
	{
		if (*str == b)
		{
			str2 = str;
			i++;
		}
		str++;
	}
	if (i != 0)
		return ((char *)str2);
	if (b == '\0')
		return ((char *)str);
	return (NULL);
}
