/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:19:17 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 18:29:33 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*nouveau;

	if (start >= ft_strlen(s))
	{
		nouveau = malloc(sizeof(char));
		nouveau[0] = '\0';
		return (nouveau);
	}
	nouveau = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!nouveau || !s)
		return (NULL);
	nouveau[len] = '\0';
	while (i < len && s[i + start])
	{
		nouveau[i] = (char)s[i + start];
		i++;
	}
	return (nouveau);
}
