/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:40:38 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/26 19:45:10 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*result;

	if (!lst)
		return(NULL);
	result = malloc(sizeof(t_list) * ft_lstsize(lst));
	tmp = malloc(sizeof(t_list));
	if (!result || !tmp)
		return (NULL);
	while (lst)
	{
		tmp->content = (*f)(lst->content);
		if (!tmp->content)
		{
			ft_lstclear(&result, (*del));
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
		lst = lst->next;
	}
	(*del)(tmp->content);
	free(tmp);
	return (result);
}
