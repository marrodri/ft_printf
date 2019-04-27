
#include "ft_printf.h"


#include <stdio.h>
char *ft_fstr(char *str, char f, t_flags *fflags)
{
	char *fstr;
	fstr = str;
	// printf("f is %c\n", f);
	if (fflags->fi_flag[0] == 1)
	{
		// printf("hash flag act\n");
		if(f == 'o')
		{
			// printf("octal with has enter\n");
			fstr = ft_strjoin("0", str);
		}
		else if(f == 'x')
		{
			fstr = ft_strjoin("0x", str);
		}
		else if (f == 'X')
		{
			fstr = ft_strjoin("0X", str);
		}
	}
	if (fflags->fi_flag[1] == 1)
	{

	}
	if (fflags->fi_flag[2] == 1)
	{

	}
	if (fflags->fi_flag[3] == 1)
	{
		if((f == 'd' || f == 'i') && str[0] != '-')
		{
			fstr= ft_strjoin("+", str);
		}
	}

	return (fstr);
}