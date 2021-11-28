/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:40:38 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/28 12:20:27 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*result;

	if (!lst)
		return (NULL);
	result = ft_lstnew((*f)(lst->content));
	if (!result)
		return (NULL);
	x = result;
	while (lst)
	{
		x->next = ft_lstnew((*f)(lst->content));
		if (!x->next)
		{
			ft_lstclear(&result, (*del));
			return (NULL);
		}
		x = x->next;
		lst = lst->next;
	}
	return (result);
}
