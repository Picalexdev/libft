/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:29:53 by apico-su          #+#    #+#             */
/*   Updated: 2022/03/02 19:20:20 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (!src)
		return (0);
	if (size < 1)
		return (ft_strlen(src));
	while (a < size - 1 && src[a])
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = 0;
	return (ft_strlen(src));
}
