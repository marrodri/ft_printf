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

//BUG overflow when the prec is 10 or higher

//change long long to long double
long long int		ft_deduct(long long int num)
{
	long long int tmp;

	tmp = num;
	if(num > 10)
	{
		while(tmp > 10)
			tmp = tmp % 10;
	}
	if(tmp >= 5)
	{
		tmp = 10 - tmp;
		num = num + tmp;
	}
	return (num);
}

long long int		ft_intlength(int n, int base)
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

char	*setzero(int n)
{
	char	*zero;
	int		i;

	i = 0;
	zero = ft_strnew(n);
	while(i < n)
	{
		zero[i] = '0';
		i++;
	}
	return (zero);
}

char				*get_dec_str(long double dec, int prec)
{
	int		fl_len;
	int		int_len;
	int		dif;
	char	*str;
	char	*zero;

	dif = 0;
	fl_len = 0;
	while (fl_len < (prec + 1))
	{
		dec = dec * 10;
		fl_len++;
	}
	fl_len--;
	dec = ft_deduct((long long int)dec);
	dec = dec / 10;
	
	int_len = ft_intlength((int)dec, 10);
	dif = fl_len - int_len;
	if (prec > dif)
	{
		zero = setzero(dif);
		str = ft_llitoa_base((long long int)dec, 10);
		str = ft_strjoin(zero, str);
	}
	else
		str = ft_llitoa_base((long long int)dec, 10);
	return (str);
}

char			*ft_ldtoa(long double num, int prec)
{
	long long int	int_n;
	long double		dec;
	char			*str_int;
	char			*str_float;

	int_n = (long long int)num;
	dec = num - (long double)int_n;
	str_int = ft_llitoa_base(int_n, 10);
	if (prec > 0)
	{
		str_float = get_dec_str(dec, prec);
		str_float = ft_strjoin(".", str_float);
		str_int = ft_strjoin(str_int, str_float);
	}
	return (str_int);
}

// int main()
// {
// 	char *f;
// 	f= ft_ldtoa(1.90, 1);
// 	printf("ans|%.1f|\n", 1.90);
// 	printf("tst|%s|\n", f);
// 	return 0;
// }
