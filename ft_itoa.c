/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:59:05 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 11:52:19 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

static char	*convert(int n, int taille, int signe)
{
	char			*str;
	unsigned int	x;

	str = malloc(sizeof(char) * (taille + 1));
	if (!str)
		return (NULL);
	if (signe)
	{
		*str = '-';
		x = -n;
	}
	else
		x = n;
	str[taille] = '\0';
	taille--;
	while (taille >= signe)
	{
		str[taille] = (x % 10) + 48;
		x = x / 10;
		taille--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		taille;
	int		temp;
	int		signe;

	taille = 0;
	signe = 0;
	if (n < 0)
	{
		taille++;
		signe++;
	}
	temp = n;
	while (temp != 0)
	{
		temp = temp / 10;
		taille++;
	}
	if (n == 0)
		taille++;
	return (convert(n, taille, signe));
}
