/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:14 by apico-su          #+#    #+#             */
/*   Updated: 2022/02/27 21:31:02 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	dest;
	t_list	tmp;

	if (!lst || !f || !del)
		return (0);
	dest = ft_lstnew(lst->content);
	if (!dest)
		return (0);
	tmp = dest;
	lst = lst->next;
	while (lst)
	{
		dest->next = ft_lstnew(f(lst->content));
		if (!dest->next)
		{
			ft_lstclear(&tmp, del);
			return (0);
		}
		dest = dest->next;
		lst = lst->next;
	}
	dest->next = NULL;
	return (tmp);
}
