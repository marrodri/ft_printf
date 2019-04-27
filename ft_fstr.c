
#include "ft_printf.h"


#include <stdio.h>
char *ft_fstr(char *str, char f, t_flags *st_flags)
{
	char *fstr;

	fstr = str;
	if (st_flags->fi_flag[0] == 1)
	{
		if (f == 'o')
		{
			fstr = ft_strjoin("0", str);
		}
		else if (f == 'x')
		{
			fstr = ft_strjoin("0x", str);
		}
		else if (f == 'X')
		{
			fstr = ft_strjoin("0X", str);
		}
	}
	if (st_flags->fi_flag[1] == 1)
	{
		if (st_flags->fi_width != 0)
		{
			int dif;
			char *zero;
			dif =st_flags->fi_width - ft_strlen(fstr);
			if(dif > 0)
			{
				//fix when there is a minus or an 0x sign
				zero = ft_strnewc('0',dif);
				fstr = ft_strjoin(zero, fstr);
			}
		}
		else
		{
			
		}
	}
	if (st_flags->fi_flag[2] == 1)
	{
		if (st_flags->fi_width != 0)
		{
			int dif;
			char *space;
			dif =st_flags->fi_width - ft_strlen(fstr);
			if(dif > 0)
			{
				//fix when there is a minus or an 0x sign  with the # flag
				space = ft_strnewc(' ',dif);
				fstr = ft_strjoin(fstr, space);
			}
		}
	}
	if (st_flags->fi_flag[3] == 1)
	{
		if ((f == 'd' || f == 'i') && str[0] != '-')
		{
			fstr= ft_strjoin("+", str);
		}
	}
	if (st_flags->fi_flag[4] == 1)
	{
		if (st_flags->fi_width != 0)
		{
			printf("add func\n");
		}
		else
		{
			fstr = ft_strjoin(" ",fstr);
		}
	}
	return (fstr);
}