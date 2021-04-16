/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:12:48 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 18:44:42 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	size_t	y;
	char	*new;

	x = 0;
	y = 0;
	new = NULL;
	while (s[x] != (char) start || s[x])
		x++;
	if (s[x] == (char) start)
	{
		new = malloc(len + 1);
		if (!new)
			return (NULL);
		while (y < len)
		{
			new[y] = s[x + y];
			y++;
		}
	}
	else
		return (NULL);
	new[y] = 0;
	return (new);
}
