/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:50:04 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 12:00:33 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char			*new;
	unsigned int	i;

	i = -1;
	if (!s)
		return ;
	new = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return ;
	while (s[++i])
		(*f)(i, (s + i));
}
