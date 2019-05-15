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

char *ft_ldtoa(long double ld_num, int prec)
{
	long long int	int_n;
	long long int	int_dec;
	long double 	ld_dec;
	char			*str_num;
	char			*str_dec;

	//function check;
	int 	i;
	int 	dec_len;
	int 	dif;
	char	*zero;
	int 	flag_neg;

	dif = 0;
	i = 0;
	dec_len = 0;
	flag_neg = 0;

	if (ld_num < 0)
	{
		ld_num = ld_num * -1;
		flag_neg = 1;
	}
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
	if (int_dec >= ft_power_of_lli(10, dec_len))
	{
		int_n += 1;
		int_dec = 0;
	}
	dec_len++;
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
	if(flag_neg == 1)
		str_num = ft_strjoin("-", str_num);
	return (str_num);
}
