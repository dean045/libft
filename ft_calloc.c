/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:20:27 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/24 18:48:32 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	array = ft_memset(array, 0, nmemb * size);
	return (array);
}
