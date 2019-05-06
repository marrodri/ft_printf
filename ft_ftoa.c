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

int intlength(int n)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *set_float_str(long double num, int prec)
{
	int i;
	int fl_len;
	int int_len;
	char *str;

	i = 0;
	fl_len = 0;
	int_len = 0;
	if (!(str = (char*)malloc((prec + 1) * sizeof(char))))
		return (NULL);
	while ((num < 1) || (fl_len < prec))
	{
		num = num * 10;
		fl_len++;
	}
	int_len = intlength((int)num);
	
	return (str);
}

char	*ft_ldtoa(long double num, int prec)
{
	int			int_n;
	long double	dec;
	char		*str_int;
	char		*str_float;
	
	int_n = (int)num;
	dec = num - (long double)int_n;
	str_int = ft_itoa(int_n);
	if (prec > 0)
	{
		str_float = set_float_str(dec, prec);
	}
	return (str_int);
}

int		main(void)
{
	long double fl = 123.00005000;
	long int int_n;
	long double test;
	long double n_to_int;
	int i;
	char *flstr = ft_ldtoa(fl, 4);
	i = 0;
	int_n = (long int)fl;
	test = fl - (long double)int_n;
	if (test == 0)
	{
		printf("decimals are 0\n");
	}
	else if (test < 1)
	{
		printf("here we have decimals\n");
	}
	n_to_int = test;
	while (n_to_int < 1 || i < 7)
	{
		n_to_int = n_to_int * 10;
		i++;
	}
	printf("int_n is |%ld|, fl is|%Lf|, test is |%.7Lf|, n_to_int is|%.9Lf|\n", int_n, fl, test, n_to_int);
	return (0);
}
