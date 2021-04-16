/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 18:34:50 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 16:49:24 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	numero;
	int	negativo;
	int	i;

	numero = 0;
	negativo = 1;
	i = 0;
	if (!*str)
		return (0);
	if ((str[i] > 8 && str[i] < 14) || str[i] == 32)
	{
		while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
			i++;
	}
	if (str[i] == '-')
	{
		negativo *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		numero = numero * 10 + str[i++] - 48;
	return (numero * negativo);
}
