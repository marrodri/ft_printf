
#include "ft_printf.h"

void check_flags()
{

}

void set_flags(char *str, int *i, t_fflags **st_fflag)
{
	if((*st_fflag = malloc(sizeof(t_fflags))) == NULL)
		return ;
	
	if(str[*i] == '#')
	{

	}
	// if (str[*i] == 'h')
	// {
	// 	if(str[*i + 1] == 'h')
	// 	{
	// 		i++;
	// 	}
	// 	else
	// 	{

	// 	}
	// 	c = va_arg(args, short int);

	// }
	// else if (str[*i] == 'l')
	// {
	// 	if(str[*i + 1] == 'l')
	// 	{

	// 	}
	// 	else
	// 	{

	// 	}
	// 	s = va_arg(args, char *);
	// 	s_form(s);
	// }
	// else if (str[*i] == 'h' || str[*i] == 'i')
	// {
	// 	num = va_arg(args, int);
	// 	d_form(num);
	// }
}
