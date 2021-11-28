/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:24:55 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 16:21:40 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

unsigned int	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t		i;
	size_t		s;
	size_t		d;

	d = ft_strlen(dst);
	i = d;
	if (size == 0)
		return (ft_strlen(src));
	if (size < d)
		return (size + ft_strlen(src));
	s = 0;
	if (size > i)
	{
		while (src[s] && size - i > 1)
		{
			dst[i] = src[s];
			i++;
			s++;
		}
	}
	dst[i] = '\0';
	while (src[s] != '\0')
		s++;
	return (d + s);
}
