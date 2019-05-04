
#include "ft_printf.h"

char *f_form(va_list args, t_flags *st_flag)
{
	char 		*f_n;
	long double	n;

	if (st_flag->fo_flag[1] == 1)
	{

	}
	else if (st_flag->fo_flag[2] == 1)
	{
		n = va_arg(args, long double);
	}
}