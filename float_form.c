
#include "ft_printf.h"

#include <stdio.h>
char *f_form(va_list args, t_flags *st_flag)
{
	char 		*f_n;
	long double	n;
	if(st_flag->prec_flag == 0)
		st_flag->prec = 6;
	if (st_flag->fo_flag[1] == 1)
	{
			printf("passed l\n");
		n = va_arg(args, double);
	}
	else if (st_flag->fo_flag[2] == 1){
		n = va_arg(args, long double);
		printf("passed L\n");
	}
	else
	{
			printf("normal f\n");
		n = (float)va_arg(args, double);
	}
	//printf("prec in float is |%d|\n", st_flag->prec);
	f_n = ft_ldtoa(n, st_flag->prec);
	return (f_n);
}