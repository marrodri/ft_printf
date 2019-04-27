
#include "ft_printf.h"


#include <stdio.h>
char *ft_fstr(char *str, char f, t_flags *fflags)
{
	char *fstr;
	// printf("f is %c\n", f);
	if (fflags->fi_flag[0] == 1)
	{
		// printf("hash flag act\n");
		if(f == 'o')
		{
			// printf("octal with has enter\n");
			fstr = ft_strjoin("0", str);
			return (fstr);
		}
		else if(f == 'x')
		{
			fstr = ft_strjoin("0x", str);
			return fstr;
		}
		else if (f == 'X')
		{
			fstr = ft_strjoin("0X", str);
			return fstr;
		}
	}

	return str;
}