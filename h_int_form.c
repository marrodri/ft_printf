#include "ft_printf.h"

char	*hd_form(va_list args)
{
	char		*num;
	int	h_n;

	h_n = (signed char)va_arg(args, int);
	num = ft_itoa(h_n);
	return (num);
}

char	*hx_form(va_list args)
{
	char				*hex;
	unsigned short int	h_n;

	h_n = va_arg(args, unsigned short);
	hex = ft_llitoa_base(h_n, 16);
	return (hex);
}

char	*huppx_form(va_list args)
{
	char				*hex;
	unsigned short int	h_n;

	h_n = va_arg(args, unsigned short);
	hex = ft_llitoa_base(h_n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*ho_form(va_list args)
{
	char				*oct;
	unsigned short int	h_n;

	h_n = va_arg(args, unsigned short);
	oct = ft_llitoa_base(h_n, 8);
	return (oct);
}

char	*hu_form(va_list args)
{
	char				*u_num;
	unsigned short int	h_n;  

	h_n = va_arg(args, unsigned short);
	u_num = ft_uitoa(h_n);
	return (u_num);
}
