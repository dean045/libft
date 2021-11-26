/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brhajji- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:13:54 by brhajji-          #+#    #+#             */
/*   Updated: 2021/11/26 19:35:37 by brhajji-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

typedef struct s_list
{
	void *content;
	struct s_list *next;
}	t_list;

typedef unsigned long size_t;
void	*ft_memset(void *str, int c, size_t n);
int		ft_strlen(const char *s);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void ft_putstr_fd(char *s, int fd);
int	ft_atoi(const char *str);
char *ft_itoa(int n);
int ft_lstsize(t_list *lst);
void ft_lstadd_back(t_list **alst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void*));
void ft_lstclear(t_list **lst, void (*del)(void*));
#endif
