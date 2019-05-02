#include "ft_printf.h"

char	*hd_form(va_list args)
{
	char	*num;
	short int s_n;

	s_n = va_arg(args, signed char);
	num = ft_itoa(s_n);
	return (num);
}

char	*hx_form(va_list args)
{
	char			*hex;
	unsigned short int us_n;

	us_n = va_arg(args, unsigned short int);
	hex = ft_llitoa_base(us_n, 16);
	return (hex);
}

char	*huppx_form(va_list args)
{
	char			*hex;
	unsigned short int	us_n;

	us_n = va_arg(args, unsigned short int);
	hex = ft_llitoa_base(us_n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*ho_form(va_list args)
{
	char				*oct;
	unsigned short int us_n;

	us_n = va_arg(args, unsigned short int);
	oct = ft_llitoa_base(us_n, 8);
	return (oct);
}

char	*hu_form(va_list args)
{
	char			*u_num;
	unsigned short int us_n;  

	us_n = va_arg(args, unsigned short int);
	u_num = ft_uitoa(us_n);
	return (u_num);
}
