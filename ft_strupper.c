// #include "libft.h"
#include "printf.h"

char *ft_strupper(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		ft_toupper(str[i]);
		i++;
	}
	return str;
}