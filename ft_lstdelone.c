/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:22:09 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/26 18:26:22 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*tmp;

	(*del)(lst->content);
	tmp = lst->next;
	free(lst);
	lst = tmp;
}
