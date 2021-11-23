/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:04:30 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/23 14:36:25 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned long long	i;
	unsigned char		tmp;
	char				*mem;

	i = 0;
	mem = str;
	tmp = (unsigned char) c;
	while (i < n)
	{
		*mem = tmp;
		i++;
		mem++;
	}
	return (str);
}
