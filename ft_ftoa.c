/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 11:39:35 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/06 11:39:41 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

char	*ft_ldtoa(long double num, int prec)
{
	int			int_n;
	long double	dec;
	char		*str_int;
	char		*str_float;
	int_n = (int)num;
	dec = num - (long double)int_n;


	return (str_int);
}

int		main(void)
{
	float fl = 123.9999;
	int int_n;
	float test;
	float n_to_int;
	int i;

	i = 0;
	int_n = (int)fl;
	test = fl - (float)int_n;
	if (test == 0)
	{
		printf("decimals are 0\n");
	}
	else if(test < 1)
	{
		printf("here we have decimals\n");
	}
	n_to_int = test;
	while(n_to_int < 1 || i < 6)
	{
		n_to_int = n_to_int * 10;
		i++;
	}
	printf("int_n is |%d|, fl is|%f|, test is |%f|, n_to_int is|%f|\n", int_n, fl, test, n_to_int);
	return (0);
}
