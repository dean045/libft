/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:42:21 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 15:08:30 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*m;
	char	*p;
	size_t	x;

	m = (char *)s1;
	p = (char *)s2;
	if (!*s2)
		return ((char *)s1);
	while (*m && n)
	{
		x = 0;
		while (*(m + x) == *(p + x) && x < n)
		{
			if (*(p + x + 1) == 0)
				return (m);
			else
				x++;
		}
		m++;
		n--;
	}
	return (NULL);
}
