/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:09:34 by apico-su          #+#    #+#             */
/*   Updated: 2021/05/04 17:12:13 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nextchar(char const *src, char c)
{
	size_t	size;

	size = 0;
	while (*src)
	{
		if (*src == c)
			return (size);
		size++;
	}
	return (strlen(src));
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		x;
	int		y;

	y = 0;
	x = 0;
	dst = calloc (strlen(s), sizeof(char *));
	if (!dst)
		return (NULL);
	while (*s)
	{
		dst[y] = calloc (nextchar(s, c), sizeof(char));
		if (!dst[y])
			return (NULL);
		while (*s != c && *s)
		{
			dst[y][x] = *(s);
			s++;
			x++;
		}
		y += 1;
		s++;
	}
	return (dst);
}
