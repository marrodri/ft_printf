
#include "ft_printf.h"

#include <stdio.h>

char *s_prec(char *fstr,  t_flags *st_flag)
{
	char *str;
	str = ft_strsub(fstr, 0, st_flag->prec);
	return (str);
}

char *dux_prec(char *fstr, t_flags *st_flag)
{
	char	*zero;
	int 	i;
	int		dif;
	
	i = 0;
	dif = st_flag->prec -  ft_strlen(fstr);
	if(fstr[0] == '-')
		dif++;
	st_flag->fi_flag[1] = 0;
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



// char *o_prec(char *fstr, t_flags *st_flag)
// {
// 	return NULL;
// }