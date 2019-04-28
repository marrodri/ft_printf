
#include "ft_printf.h"

char *zero_flag(char *fstr, t_flags *st_flags)
{
	if (st_flags->fi_width != 0)
	{
		int dif;
		char *zero;
		dif = st_flags->fi_width - ft_strlen(fstr);
		if(dif > 0)
		{
			//fix when there is a minus neg, plus (fi_flag[4]) or an 0x sign (fi_flag[0])
			zero = ft_strnewc('0',dif);
			fstr = ft_strjoin(zero, fstr);
			if (st_flags->fi_flag[3] == 1)
			{
				int i;

				i = 0;
				while(fstr[i])
				{

				}
			}
		}
	}
}