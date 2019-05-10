
#include "ft_printf.h"

#include <stdio.h>

char *s_prec(char *fstr,  t_flags *st_flags)
{
	char *str;
	str = ft_strsub(fstr, 0, st_flags->prec);
	return (str);
}

char *dux_prec(char *fstr, t_flags *st_flags)
{
	char	*zero;
	int 	i;
	int		dif;
	
	i = 0;
	dif = st_flags->prec -  ft_strlen(fstr);
	if(fstr[0] == '-')
		dif++;
	st_flags->fi_flag[1] = 0;
	if(dif > 0)
	{
		zero = ft_strnewc('0', dif);
		fstr = ft_strjoin(zero, fstr);
		while (fstr[i])
		{
			if (fstr[i] == '-')
			{
				fstr = ft_swap_charstr(fstr, fstr[i], 0);
			}
			i++;
		}
	}
	return (fstr);
}

char *o_prec(char *fstr, t_flags *st_flags)
{
	char *zero;
	int dif;

	dif = st_flags->prec -  ft_strlen(fstr);
	st_flags->fi_flag[1] = 0;
	if(dif > 0)
	{
		st_flags->fi_flag[0] = 0;
		zero = ft_strnewc('0', dif);
		fstr = ft_strjoin(zero, fstr);
	}
	return (fstr);
}