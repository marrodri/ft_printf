
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
	char flag = '%';
	char sum = 0;
	int i = 0;
	va_list	args;

	va_start(args, str);

	// while (str[i])
	// {
	// 	if (str[i] == '%')
	// 	{
	// 		sum = va_arg(args, int);
	// 		ft_putchar(sum);
	// 	}
	// 	i++;
	// }
	sum = va_arg(args, int);
	sum = va_arg(args, int);
	sum = va_arg(args, int);
	// ft_putstr(ft_itoa(sum));
	va_end(args);

	return sum;
}

int main()
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	//if c added it should warn that is not used
	ft_printf("a %c b %c %c \n", a, b, c); 
}