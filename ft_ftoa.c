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

int ft_deduct()
{
	//deducts if it's higher or equal to 5
	return 0;
}

int ft_intlength(int n, int base)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

char *setzero(int n)
{
	char *zero;
	int i;

	i = 0;
	zero = ft_strnew(n);
	while(i < n)
	{
		zero[i] = '0';
		i++;
	}
	return zero;
}

char *set_float_str(long double num, int prec)
{
	int fl_len;
	int int_len;
	int dif;
	char *str;
	char *zero;

	dif = 0;
	fl_len = 0;
	//infinite loop when there's too many 000 in the float
	while ((num < 1) || (fl_len < prec))
	{
	printf("loop\n");
		num = num * 10;
		fl_len++;
	}
	int_len = ft_intlength((int)num, 10); //NOT USED
	dif = fl_len - int_len;
	if (dif > 0)
	{
		zero = setzero(dif);
		str = ft_llitoa_base((int)num, 10);
		str = ft_strjoin(zero, str);
	}
	else
	{
		str = ft_llitoa_base((int)num, 10);
	}

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
		str_float = ft_strjoin(".", str_float);
		str_int = ft_strjoin(str_int, str_float);
	}
	return (str_int);
}

int		main(void)
{
	float fl = 123.000000000000105000;
	long int int_n;
	long double test;
	long double n_to_int;
	int i;
	char *flstr = ft_ldtoa(fl, 8);
	printf("ans|%.8f|\n", fl);
	printf("tst|%s|\n", flstr);
	// i = 0;
	// int_n = (long int)fl;
	// test = fl - (long double)int_n;
	// if (test == 0)
	// {
	// 	printf("decimals are 0\n");
	// }
	// else if (test < 1)
	// {
	// 	printf("here we have decimals\n");
	// }
	// n_to_int = test;
	// while (n_to_int < 1 || i < 7)
	// {
	// 	n_to_int = n_to_int * 10;
	// 	i++;
	// }
	// printf("int_n is |%ld|, fl is|%Lf|, test is |%.7Lf|, n_to_int is|%.9Lf|\n", int_n, fl, test, n_to_int);
	return (0);
}
