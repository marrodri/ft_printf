
#include "ft_printf.h"

void check_flag(char *str, int i, char *out)
{
	if(str[i] == 'c')
	{
		c_flag(*out);
	}
	else if(str[i] == 's')
	{
		s_flag(&out);
	}
}


int ft_printf(const char *str, ...)
{
	char flag = '%';
	char sum ;
	int i = 0;
	va_list	args;

	va_start(args, str);

	while (str[i])
	{
		ft_putchar(str[i]);
	 	if (str[i] == '%')
	 	{
			sum = va_arg(args, int);
			check_flag(str, i + 1, &sum);
		}
		i++;
	}
	// sum = va_arg(args, int);
	// sum = va_arg(args, int);
	// sum = va_arg(args, int);
	// ft_putstr(ft_itoa(sum));
	va_end(args);

	return sum;
}

int main()
{
	char a = 'h';
	char b = 'l';
	char c = 'w';
	//if c added it should warn that is not used
	ft_printf("a %c b %c %c \n", a, b, c); 
}