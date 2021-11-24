/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:42:21 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 17:03:29 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned char	*m;
	unsigned char	*p;

	m = (unsigned char *)s1;
	p = (unsigned char *)s2;
	if (!*s2)
		return ((char *)s1);
	while (*m && n)
	{
		while (*m == *p)
		{
			if (*(p + 1) == '\0' )
				return ((char *)m);
			else
				p++;
		}
		m++;
		n--;
		p = (unsigned char *)s2;
	}
	return (NULL);
}