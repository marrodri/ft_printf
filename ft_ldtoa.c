
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

int int_deduct(long long int *int_n)
{
	return 0;
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
	while(prec)
	{

	}

	if(ld_dec >= 100)
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