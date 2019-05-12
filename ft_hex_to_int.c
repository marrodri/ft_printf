

#include "ft_printf.h"
#include "libft/libft.h"

#include <stdio.h>
int 	ft_hextoint(char *str)
{
	int i;
	int res;
	int tmp;

	i = 0;
	res = 0;
	tmp = 0;
	const char *hex = "0123456789ABCDEF";
	ft_strupper(str);
	while (!(str[i] >= '0' && str[i] <= '9') && !(str[i] >= 'A' && str[i] <='F'))
	{
		printf("not found\n");
		i++;
	}
	return (res);
}

int main()
{
	printf("%d", ft_hextoint(" -=a"));
}