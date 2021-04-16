/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:29:53 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 14:49:32 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	a;
	unsigned int	x;

	a = 0;
	x = ft_strlen(dst);
	while (a < size - 1 && size >= 2)
	{
		if (a <= x - 1)
			dst[a] = src[a];
		else
			dst[a] = 0;
		a++;
	}
	if (size != 0)
		dst[a] = 0;
	return (x);
}
