
#include "ft_printf.h"

char	*lo_form(va_list args)
{
	char				*oct;
	unsigned long int		l_n;

	l_n = va_arg(args, unsigned long int);
	oct = ft_llitoa_base(l_n, 8);
	return (oct);
}

char	*ho_form(va_list args)
{
	char				*oct;
	unsigned short int h_n;

	h_n = va_arg(args, unsigned short int);
	oct = ft_llitoa_base(h_n, 8);
	return (oct);
}

char	*o_form(va_list args)
{
	char				*oct;
	unsigned int		n;

	n = va_arg(args, unsigned int);
	oct = ft_llitoa_base(n, 8);
	return (oct);
}