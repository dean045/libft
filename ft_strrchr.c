/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:55:56 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 13:07:25 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
char	*ft_strrchr(const char *s, int c)
{
	char	*src;
	char	*oc;

	src = (char *)s;
	oc = NULL;
	while (*src)
	{
		if (*src == (char) c)
			oc = src;
		src++;
	}
	if (oc != NULL)
		return (oc);
	if (*src == (char) c)
		return (src);
	return (NULL);
}
