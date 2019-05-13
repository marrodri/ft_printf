
#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int		ft_intlength(int n, int base)
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
	int				int_dec;
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



	return (NULL);
}

int main()
{
	char *f;
	f= ft_ldtoa(1, 2);
	printf("ans|%.2f|\n", 1.90);
	printf("tst|%s|\n", f);
	return (0);
}