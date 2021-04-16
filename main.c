/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:47:30 by apico-su          #+#    #+#             */
/*   Updated: 2021/04/16 15:40:19 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char	*a;
	//char *src = "test basic du memccpy !";
	//char *x;

	a = malloc(40);
	//char b[] = "holadhgfahjhfsgluwh";
	/*
	memset(a, 'a', 4);
	ft_memset(a, 'b', 6);
	
	memcpy(a, b, 2);
	ft_memcpy(a, b, 3);*/
	memcpy(a, "Hola que tal", 40);
	//memmove(a, &a[3], 5); 
	printf("AQUI %s\n", a);
}
