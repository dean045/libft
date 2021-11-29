/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:10:13 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/29 16:25:48 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;

	src = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n && *src)
	{
		if (*src == (unsigned char) c)
			return ((void *)src);
		src++;
		n--;
	}
	if (*src == (unsigned char) c && !*src)
		return ((void *)src);
	return (NULL);
}
