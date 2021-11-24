/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:10:13 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 13:17:05 by brhajji-         ###   ########.fr       */
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
	while (*src && n)
	{
		if (*src == (unsigned char) c)
			return (src);
		src++;
		n--;
	}
	if (*src == (unsigned char) c)
		return (src);
	return (NULL);
}
