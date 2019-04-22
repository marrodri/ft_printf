
#include "ft_printf.h"


#include <stdio.h>
char *ft_fstr(char *str, char f, t_fflags *flags)
{
	char *fstr;

	if(flags->hash_flag == 1)
	{
		printf("hash flag act\n");
		if(f == 'o')
		{
			printf("octal with has enter\n");
			fstr = ft_strjoin("0", str);
			return fstr;
		}
		else if(f == 'x' || f == 'X')
		{
			fstr = ft_strjoin("0x", str);
			return fstr;
		}
	}
	return str;
}