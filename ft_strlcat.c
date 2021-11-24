/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:24:55 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 12:25:15 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	k;

	d = 0;
	s = 0;
	k = 0;
	while (dest[d] != '\0')
		++d;
	while (src[s] != '\0')
		++s;
	if (size < d)
		s += size;
	else
		s += d;
	while (*src && d < (size - 1) && size != 0)
	{
		dest[d] = *src;
		++d;
		++src;
	}
	dest[d] = 0;
	return (s);
}
