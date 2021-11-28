/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:26:40 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 11:59:15 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	x;
	char			c;

	x = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		x = -n;
	}
	if (x < 10)
	{
		c = x + 48;
		write(fd, &c, 1);
	}
	else if (x >= 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
}
