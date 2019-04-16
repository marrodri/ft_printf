// #include "libft.h"
#include "printf.h"

#include <stdio.h>
void ft_strupper(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		printf("looping upper\n");
		ft_toupper(str[i]);
		i++;
	}
	printf("exit\n");
	// return str;
}