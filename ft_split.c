/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 11:40:35 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 12:35:47 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

static int	nb_mot(char const *str, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i - 1] == c || i == 0))
			nb++;
		i++;
	}
	return (nb);
}

static char	*put_in_tab(char const *str, char c)
{
	int		x;
	int		i;
	char	*tab;

	x = 0;
	i = 0;
	tab = NULL;
	while (str[x] == c && str[x])
		x++;
	tab = malloc (sizeof (char) * (x + 1));
	while (str[i] != c && str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		taille;
	int		x;
	char	**tab;

	if (!str)
		return (NULL);
	taille = 0;
	i = -1;
	x = nb_mot(str, c);
	tab = malloc (sizeof (char *) * (x + 1));
	if (!tab)
		return (NULL);
	while (str[++i])
	{
		while (str[i] == c)
			i++;
		if (taille < x && str[i] != c && (i == 0 || str[i - 1] == c))
		{
			tab[taille] = put_in_tab(&str[i], c);
			taille++;
		}
	}
	tab[taille] = NULL;
	return (tab);
}
