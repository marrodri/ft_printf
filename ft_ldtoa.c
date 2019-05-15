
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

long long int		ft_baselength(long long int n, int base)
{
	int len;

	len = 0;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	len++;
	return (len);
}

long long int 		ft_llideduct(long long int num)
{
	long long int tmp;

	tmp = num;
	if(num > 10)
	{
		while(tmp > 10)
			tmp = tmp % 10;
	}
	if (tmp >= 5)
	{
		tmp = 10 - tmp;
		num = num + tmp;
	}
	return (num);
}

long long int	ft_power_of_l(long long int n, long long int expo)
{
	long long int i;
	long long int power;

	i = 1;
	power = n;
	if (expo <= 0)
		return (1);
	else if (expo == 1)
		return (n);
	while (i < expo)
	{
		power = power * n;
		i++;
	}
	return (power);
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
	int_dec = ft_intdeduct((long long int)ld_dec);
	dec_len--;
	int_dec = int_dec / 10;
	if (int_dec >= ft_power_of_long(10, dec_len))
	{
		int_n += 1;
		int_dec = 0;
	}
	dec_len++;
	str_num = ft_llitoa_base(int_n, 10);
	if (prec > 0)
	{
		dif = dec_len - ft_baselength(int_dec, 10);
		if(int_dec == 0)
			dif--;
		if (prec > dif) //check here how to add the zeroes
		{
			zero = setzero(dif);
			str_dec = ft_llitoa_base(int_dec, 10);
			str_dec = ft_strjoin(zero, str_dec);
		}
		else
		{
			str_dec = ft_llitoa_base(int_dec, 10);
		}
		str_num = ft_strjoin(str_num, ".");
		str_num = ft_strjoin(str_num, str_dec);
	}

	if(flag_neg == 1)
	{
		str_num = ft_strjoin("-", str_num);
	}
	return (str_num);

}
