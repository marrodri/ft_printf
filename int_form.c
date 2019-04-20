
#include "ft_printf.h"

char *d_form(int n)
{
	char *num;
	num = ft_itoa(n);
	return(num);
}

char *x_form(int n, char ca)
{
	char *hex;
	hex = ft_llitoa_base(n, 16);
	if (ca == 'X')
	{
		ft_strupper(hex);
	}
	return(hex);
}

char *o_form(int n)
{
	char *oct;
	oct = ft_llitoa_base(n, 8);
	return(oct);
}

char *u_form(unsigned int n)
{
	char *u_num;
	u_num = ft_uitoa(n);
	return(u_num);
}
