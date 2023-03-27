/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbricot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:28:21 by gbricot           #+#    #+#             */
/*   Updated: 2023/02/17 16:24:42 by gbricot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*res;

	if (!f || !del || !lst)
		return (0);
	res = ft_lstnew(0);
	if (res == NULL)
		ft_lstclear(&res, del);
	res->content = f(lst->content);
	lst = lst->next;
	tmp = res;
	while (lst != NULL)
	{
		tmp->next = ft_lstnew(0);
		tmp = tmp->next;
		if (tmp == NULL)
			ft_lstclear(&tmp, del);
		tmp->content = f(lst->content);
		lst = lst->next;
	}
	return (res);
}
