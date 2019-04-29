
#include "libft.h"

char	*ft_swap_charstr(char *fstr, char c, int pos)
{
	int		i;
	char	tmp;

	i = 0;
	while (fstr[i])
	{
		if (fstr[i] == c)
		{
			tmp = fstr[pos];
			fstr[pos] = fstr[i];
			fstr[i] = tmp;
			return (fstr);
		}
		i++;
	}
	return (fstr);
}