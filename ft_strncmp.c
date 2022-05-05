/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:59:05 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/12 17:05:15 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned char *s1o;
	unsigned char *s2o;

	s1o = (unsigned char *)s1;
	s2o = (unsigned char *)s2;
	if (n)
	{
		while ((unsigned char)*s1o == (unsigned char)*s2o && *s1o && n)
		{
			s1o++;
			s2o++;
			n--;
		}
		if (n)
			return (*s1o - *s2o);
	}
	return (0);
}
