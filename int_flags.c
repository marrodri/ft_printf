
#include "ft_printf.h"
void d_form(int n)
{
	char *num;
	num = ft_itoa(n);
	ft_putstr(num);
}
void x_form(int n)
{
	char *hex;
	ft_putstr("converting to hex ");
	hex = ft_itoa(n);
	ft_putstr(hex);
}
