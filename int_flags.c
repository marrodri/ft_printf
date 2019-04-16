
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
	hex = ft_int_to_hex(n);
	// if(ca == 'X')
	// {
	// 	ft_strupper(hex);
	// }
	ft_putstr(hex);
}

void o_form(int n)
{
	char *oct;
	int long in_oct;
	in_oct = ft_dec_to_oct(n);
	oct = ft_itoa(in_oct);
	ft_putstr(oct);
}

