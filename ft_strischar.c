#include "ft_printf.h"

int ft_strischar(char *str, char c)
{
	int i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] != c)
			return 0;
		i++;
	}
	return 1;
}