/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:57:32 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 12:22:16 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)src;
	i = 0;
	j = 0;
	while (s[i])
		i++;
	while (dst[j])
		j++;
	if (size > 0 && j)
	{
		j = 0;
		while (j < size - 1 && s[j])
		{
			dst[j] = s[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (i);
}
