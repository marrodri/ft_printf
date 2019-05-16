/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldtoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 15:11:02 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/15 15:11:05 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *set_strdec(long long int int_n, long long int int_dec, int prec, int dec_len)
{
	char	*str_num;
	char	*str_dec;
	char	*zero;
	int		dif;

	dif = 0;
	str_num = ft_llitoa_base(int_n, 10);
	if (prec > 0)
	{
		dif = dec_len - (ft_libaselen(int_dec, 10, 1)+ 1);
		if(int_dec == 0)
			dif--;
		if (prec > dif)
		{
			zero = ft_strnewc('0', dif);
			str_dec = ft_llitoa_base(int_dec, 10);
			str_dec = ft_strjoin(zero, str_dec);
		}
		else
			str_dec = ft_llitoa_base(int_dec, 10);
		str_num = ft_strjoin(str_num, ".");
		str_num = ft_strjoin(str_num, str_dec);
	}
	return (str_num);
}

int		neg_flag(long double *n)
{
	if (*n < 0)
	{
		*n *= -1;
		return (1);
	}
	return (0);
}

void ld_int_ded(long long *int_n, long long int *int_dec, int dec_len)
{
	if (*int_dec >= ft_power_of_lli(10, dec_len))
	{
		*int_n += 1;
		*int_dec = 0;
	}
	return ;
}

char	*ft_ldtoa(long double ld_num, int prec)
{
	long long int	int_n;
	long long int	int_dec;
	long double 	ld_dec;
	char			*str_num;
	int 			dec_len;
	int 			flag_neg;

	dec_len = 0;
	flag_neg = neg_flag(&ld_num);
	int_n = (long long int)ld_num;
	ld_dec = ld_num - (long double)int_n;
	while (dec_len <= prec)
	{
		ld_dec = ld_dec * 10;
		dec_len++;
	}
	int_dec = ft_llideduct((long long int)ld_dec);
	dec_len--;
	int_dec = int_dec / 10;
	ld_int_ded(&int_n, &int_dec, dec_len);
	dec_len++;
	str_num = set_strdec(int_n, int_dec, prec, dec_len);
	if(flag_neg == 1)
		str_num = ft_strjoin("-", str_num);
	return (str_num);
}
