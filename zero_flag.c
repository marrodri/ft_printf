
#include "ft_printf.h"

char	*swap_charstr(char *fstr, char c, int pos)
{
	int i;
	char tmp;

	i = 0;
	while(fstr[i])
	{
		if(fstr[i] == c)
		{
			tmp = fstr[pos];
			fstr[pos] = fstr[i];
			fstr[i] = tmp;
			return fstr;
		}
		i++;
	}
	return (fstr);
}

char	*zero_flag(char *fstr, char f, t_flags *st_flags)
{
	int dif;
	char *zero;
	int i;
	// fix when there is a minus neg
	// FIXED plus (fi_flag[4]) 
	// FIXED 0x sign (fi_flag[0])

	i = 0;
	dif = st_flags->fi_width - ft_strlen(fstr);
	if (dif > 0)
	{
		zero = ft_strnewc('0',dif);
		fstr = ft_strjoin(zero, fstr);
		while(fstr[i])
		{
			if(fstr[i] == '+' || fstr[i] == '-')
			{
				fstr = swap_charstr(fstr, fstr[i], 0);
			} 
			else if(fstr[i] == 'X' || fstr[i] == 'x')
			{
				fstr = swap_charstr(fstr, fstr[i], 1);
			}
			i++;
		}
		// if (st_flags->fi_flag[3] == 1) //plus flag is found
		// {
		// 	fstr = swap_charstr(fstr, '+', 0);
		// }
		// else if (st_flags->fi_flag[0] == 1)
		// {
		// 	if (f == 'x')
		// 		 fstr = swap_charstr(fstr, 'x', 1);
		// 	else if (f == 'X')
		// 	fstr = swap_charstr(fstr, 'X', 1);
		// }
	}
	return (fstr);
}