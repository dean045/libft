/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:47:00 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/23 16:24:01 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char			*d;
	char			*s;
	unsigned long long		i;

	i = 0;
	d = dst;
	s = (char *)src; 

	while (i < n && (src || dst))
	{
		*(char*)d = *(char*)s;
    	i++;
		d++;
		s++;
	}
	return (dst);
}
