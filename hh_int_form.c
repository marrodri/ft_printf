
#include "ft_printf.h"

char	*hhd_form(va_list args)
{
	char			*num;
	signed char		hh_ch;

	hh_ch = va_arg(args, signed char);
	num = ft_itoa(hh_ch);
	return (num);
}

char	*hhx_form(va_list args)
{
	char			*hex;
	unsigned char	 hh_ch;

	 hh_ch = va_arg(args, unsigned char);
	hex = ft_llitoa_base(hh_ch, 16);
	return (hex);
}

char	*hhuppx_form(va_list args)
{
	char			*hex;
	unsigned char	hh_ch;

	hh_ch = va_arg(args, unsigned char);
	hex = ft_llitoa_base(hh_ch, 16);
	ft_strupper(hex);
	return (hex);
}

char	*hho_form(va_list args)
{
	char				*oct;
	unsigned char		hh_ch;

	hh_ch = va_arg(args, unsigned char);
	oct = ft_llitoa_base( hh_ch, 8);
	return (oct);
}

char	*hhu_form(va_list args)
{
	char			*u_num;
	unsigned char	 hh_ch;

	hh_ch = va_arg(args, unsigned char);
	u_num = ft_uitoa(hh_ch);
	return (u_num);
}
