/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 19:26:00 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 19:33:18 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*n;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	n = malloc(sizeof(char) * (len + 1));
	if (!n)
		return (NULL);
	i = -1;
	while (++i < len)
		n[i] = s[i];
	n[i] = '\0';
	return (n);
}
