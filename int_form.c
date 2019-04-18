
#include "ft_printf.h"

void d_form(int n)
{
	char *num;
	num = ft_itoa(n);
	ft_putstr(num);
}

void x_form(int n, char ca)
{
	char *hex;
	hex = ft_itoa_base(n, 16);
	if (ca == 'X')
	{
		ft_strupper(hex);
	}
	ft_putstr(hex);
}

void o_form(int n)
{
	char *oct;
	oct = ft_itoa_base(n, 8);
	ft_putstr(oct);
}
