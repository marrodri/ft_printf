
#include "ft_printf.h"

char	*zero_flag(char *fstr, t_flags *st_flags)
{
	int		dif;
	char	*zero;
	int		i;

	i = 0;
	dif = st_flags->fi_width - ft_strlen(fstr);
	if (dif > 0)
	{
		zero = ft_strnewc('0',dif);
		fstr = ft_strjoin(zero, fstr);
		while (fstr[i])
		{
			if (fstr[i] == '+' || fstr[i] == '-' || fstr[i] == ' ')
			{
				fstr = ft_swap_charstr(fstr, fstr[i], 0);
			}
			else if (fstr[i] == 'X' || fstr[i] == 'x')
			{
				fstr = ft_swap_charstr(fstr, fstr[i], 1);
			}
			i++;
		}
	}
	return (fstr);
}