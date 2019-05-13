
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int		ft_baselength(int n, int base)
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

int ft_intdeduct(long long int num)
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

char *ft_ldtoa(long double ld_num, int prec)
{
	long long int	int_n;
	long long int	int_dec;
	long double 	ld_dec;
	char			*str_num;
	char			*str_dec;

	//function check;
	int i;
	int dec_len;

	i = 0;
	dec_len = 0;
	int_n = (long long int)ld_num;
	ld_dec = ld_num - (long double)int_n;
	while (dec_len <= prec)
	{
		ld_dec = ld_dec * 10;
		dec_len++;
	}
	int_dec = ft_intdeduct((long long int)ld_dec);
	if (ld_dec >= ft_power_of(10, dec_len))
	{
		int_n += 1;
	}
	dec_len--;
	printf("dec_len|%d|\n", dec_len);
	printf("int_n|%lld|\n", int_n);
	printf("ind_dec|%lld|\n", int_dec);

	return (NULL);
}

int main()
{
	char *f;
	printf("++++ ft_ldtoa test ++++\n");
	f= ft_ldtoa(1.90, 1);

	printf("____ printf answer ____\n");
	printf("ans|%.1f|\n", 1.90);
	//printf("tst|%s|\n", f);
	return (0);
}