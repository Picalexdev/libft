/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:47:30 by apico-su          #+#    #+#             */
/*   Updated: 2021/05/04 17:10:36 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	//char	*a;
	char	*b;
	//char *src = "test basic du memccpy !";
	//char *x;
	//a = malloc(40);
	//char b[] = "holadhgfahjhfsgluwh";
	/*
	memset(a, 'a', 4);
	ft_memset(a, 'b', 6);
	
	memcpy(a, b, 2);
	ft_memcpy(a, b, 3);
	memcpy(a, "Hola que tal", 40);
	memcpy(b, "Hola bien y tu?", 40);
	ft_strlcpy(b, a, 40); */
	//b = ft_itoa(-2147483647 -1);
	b = ft_split("Hola muy bunas", ' ')[0];
	printf("%s\n", b);
}
