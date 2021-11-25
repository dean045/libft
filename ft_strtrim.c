/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:16:36 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/25 19:39:50 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int		taille;
	int		i;
	char	*new;

	if (!s1)
		return (NULL);
	taille = ft_strlen(s1) -  1;
	i = 0;
	while (ft_strchr(set, (int)s1[i]))
		i++;
	while (ft_strchr(set, (int)s1[taille]))
		taille--;
	new = ft_substr(s1, i, taille - i + 1);
	return (new);
}
