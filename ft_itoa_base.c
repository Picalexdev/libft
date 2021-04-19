/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:29:38 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/19 21:20:52 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

char	*num_calloc(int n, int base)
{
	int		x;
	int		y;

	x = 1;
	y = 0;
	while (n / x)
	{
		x = x * base;
		y++;
	}
	if (n >= 0)
		y--;
	return (ft_calloc(y + 1, sizeof(char)));
}

char	*ft_itoa(int n, int base)
{
	int		x[3];
	char	*num;
	char	*alphanum;

	alphanum = "0123456789abcdefghijklmnopqrstuvwxyz";
	num = num_calloc(n, base);
	x[0] = 1;
	x[1] = 0;
	x[2] = 0;
	if (n < 0)
	{
		num[0] = '-';
		x[1]++;
		n = -n;
	}
	while (n / x[0])
		x[0] = x[0] * base;
	while (x[0] / base > 0)
	{
		num[x[1]++] = alphanum[(n / (x[0] / base)) - (x[2] * base)];
		x[0] = x[0] / base;
		x[2] = (n / x[0]);
	}
	free (num);
	return (num);
}
char	*ft_itoa(int n)
{
	int				x;
	unsigned int	z;
	unsigned int	a;
	char			*dest;

	dest = malloc(18);
	a = 1;
	x = 0;
	z = 0;
	while (n / a)
	{
		a = a * 10;
	}
	a = a / 10;
	while (a > 0)
	{
		dest[x] = (n / a) - (z * 10) + '0';
		z = (n / a);
		a = a / 10;
		x++;
	}
	dest[x] = ':';
	dest[x + 1] = 0;
	free(dest);
	return (dest);
}*/
