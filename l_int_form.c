
#include "ft_printf.h"

char	*ld_form(va_list args)
{
	char		*num;
	long int	l_n;

	l_n = va_arg(args, int);
	num = ft_llitoa(l_n);
	return (num);
}

char	*lx_form(va_list args)
{
	char			*hex;
	unsigned long int	l_n;


	l_n = va_arg(args, unsigned long int);
	hex = ft_llitoa_base(l_n, 16);
	return (hex);
}

char	*luppx_form(va_list args)
{
	char			*hex;
	unsigned long int	l_n;


	l_n = va_arg(args, unsigned long int);
	hex = ft_llitoa_base(l_n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*lo_form(va_list args)
{
	char				*oct;
	unsigned long int		l_n;

	l_n = va_arg(args, unsigned long int);
	oct = ft_llitoa_base(l_n, 8);
	return (oct);
}

char	*lu_form(va_list args)
{
	char			*u_num;
	unsigned long int	l_n;

	l_n = va_arg(args, unsigned long int);
	u_num = ft_uitoa(l_n);
	return (u_num);
}
