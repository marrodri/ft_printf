
#include "ft_printf.h"

void check_flag(char *str, int i, va_list args)
{
	char c;
	char *s;
	char *p;

	if(str[i] == 'c')
	{
		c = va_arg(args, const char *);
		c_flag(c);
	}
	else if(str[i] == 's')
	{
		s = va_arg(args, const char *);
		s_flag(c);
	}
}


int ft_printf(const char *str, ...)
{
	char flag = '%';
	char sum ;
	int i = 0;
	int tmp = 0;
	va_list	args;

	va_start(args, str);

	while (str[i])
	{
	 	if (str[i] == '%')
	 	{
			tmp = i;
			i++;
			while(str[i] == 'c' || str[i] == 's')
				i++;
			check_flag(str, tmp + 1, args);
		}
		ft_putchar(str[i]);
		i++;
	}
	va_end(args);

	return sum;
}

int main()
{
	char a = 'h';
	char b = 'l';
	char c = 'w';
	//if c added it should warn that is not used

	char *sa = "hello";
	char *sb = "tweet";
	char *sc = "sdfg";
	ft_printf("char a is |%s|\n char b is |%c|\n char c is |%c| \n", sa, b, c); 
}