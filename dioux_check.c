
#include "ft_printf.h"

char *uppx_check(va_list args, t_flags *st_flags)
{
	if (st_flags->fo_flag[0] == 1)
		return (huppx_form(args));
	else if (st_flags->fo_flag[0] == 2)
		return (hhuppx_form(args));
	else if (st_flags->fo_flag[1] == 1)
	{
		return (luppx_form(args));
	}
	else if (st_flags->fo_flag[1] == 2)
	{
		return (lluppx_form(args));
	}
	else
	{
		return (uppx_form(args));
	}
}

char *x_check(va_list args, t_flags *st_flags)
{
	if (st_flags->fo_flag[0] == 1)
	{
		return (hx_form(args));
	}
	else if (st_flags->fo_flag[0] == 2)
	{
		return (hhx_form(args));
	}
	else if (st_flags->fo_flag[1] == 1)
	{
		return (lx_form(args));
	}
	else if (st_flags->fo_flag[1] == 2)
	{
		return (llx_form(args));
	}
	else
	{
		return (x_form(args));
	}
}

char *u_check(va_list args, t_flags *st_flags)
{
	if (st_flags->fo_flag[0] == 1)
	{
		return (hu_form(args));
	}
	else if (st_flags->fo_flag[0] == 2)
	{
		return (hhu_form(args));
	}
	else if (st_flags->fo_flag[1] == 1)
	{
		return (lu_form(args));
	}
	else if (st_flags->fo_flag[1] == 2)
	{
		return (llu_form(args));
	}
	else
	{
		return (u_form(args));
	}
}

char *o_check(va_list args, t_flags *st_flags)
{
	if (st_flags->fo_flag[0] == 1)
	{
		return (ho_form(args));
	}
	else if (st_flags->fo_flag[0] == 2)
	{
		return (hho_form(args));
	}
	else if (st_flags->fo_flag[1] == 1)
	{
		return (lo_form(args));
	}
	else if (st_flags->fo_flag[1] == 2)
	{
		return (llo_form(args));
	}
	else
	{
		return (o_form(args));
	}
}

char *d_check(va_list args, t_flags *st_flags)
{
	if (st_flags->fo_flag[0] == 1)
	{
		return (hd_form(args));
	}
	else if (st_flags->fo_flag[0] == 2)
	{
		return (hhd_form(args));
	}
	else if (st_flags->fo_flag[1] == 1)
	{
		return (ld_form(args));
	}
	else if (st_flags->fo_flag[1] == 2)
	{
		return (lld_form(args));
	}
	else
	{
		return (d_form(args));
	}
}