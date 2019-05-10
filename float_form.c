
#include "ft_printf.h"

#include <stdio.h>
char *f_form(va_list args, t_flags *st_flag)
{
	char 		*f_n;
	long double	n;

	if (st_flag->fo_flag[1] == 1)
		n = va_arg(args, double);
	else if (st_flag->fo_flag[2] == 1)
		n = va_arg(args, long double);
	else
	{
		n = (float)va_arg(args, double);
	}
	printf("prec in float is |%d|\n", st_flag->prec);
	f_n = ft_ldtoa(n, st_flag->prec);
	return (f_n);
}