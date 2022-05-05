/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaverdu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:59:47 by glaverdu          #+#    #+#             */
/*   Updated: 2021/01/12 17:04:41 by glaverdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		i;
	int		i2;
	int		len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	i2 = ft_strlen((char *)s1);
	while (ft_strchr((char *)set, (char)s1[i2]) && i2 > i)
		i2--;
	if (!(cpy = malloc(sizeof(char) * ((i2 - i) + 2))))
		return (NULL);
	len = (i2 - i) + 1;
	i2 = 0;
	while (len--)
	{
		cpy[i2] = s1[i];
		i++;
		i2++;
	}
	cpy[i2] = '\0';
	return (cpy);
}
