/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:19:03 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 14:42:58 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*un;
	unsigned char	*deux;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	un = (unsigned char *)s1;
	deux = (unsigned char *)s2;
	while (i < n - 1 && un[i] == deux[i])
		i++;
	return (un[i] - deux[i]);
}
