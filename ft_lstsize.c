/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:56:28 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/26 18:02:55 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int	i;

	if (!lst)
		return (0);
	tmp = lst;
	i = 1;
	while (lst && lst->next)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
