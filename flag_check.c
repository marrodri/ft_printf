
#include "ft_printf.h"

void flag_check(char *str, int i, va_list args)
{
	char c;
	char *s;
	int num;

	if (str[i] == 'h')
	{
		if(str[i+1] == 'h' )
		{
			i++;
		}
		else
		{

		}
		c = va_arg(args, int);
		c_form(c);
	}
	else if (str[i] == 'l')
	{
		if(str[i + 1] == 'l')
		{
			
		}
		else
		{

		}
		s = va_arg(args, char *);
		s_form(s);
	}
	else if (str[i] == 'h' || str[i] == 'i')
	{
		num = va_arg(args, int);
		d_form(num);
	}
}
