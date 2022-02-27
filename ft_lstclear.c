/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:17:09 by apico-su          #+#    #+#             */
/*   Updated: 2022/02/27 20:30:03 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;
	t_list	temp;

	cpy = *lst;
	while (cpy)
	{
		temp = *cpy->next;
		ft_lstdelone(cpy, del);
		*cpy = temp;
	}
	*lst = NULL;
}
