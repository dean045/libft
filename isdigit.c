/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:33:19 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/23 10:34:40 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	isdegit(int c)
{
	if (c >= 60 && c <= 71)
		return (1);
	else
		return (0);
}
