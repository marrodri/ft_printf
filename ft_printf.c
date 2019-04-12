
#include "ft_printf.h"


#include <stdio.h>
void check_flag(char *str, int i, va_list args)
{
	char c;
	char *s;
	unsigned char *p;
	int num;

	if(str[i] == 'c')
	{
		c = va_arg(args, int);
		c_form(c);
	}
	else if(str[i] == 's')
	{
		s = va_arg(args, char *);
		s_form(s);
	}
	else if(str[i] == 'd')
	{
		num = va_arg(args, int);
		d_form(num);
	}
	else if(str[i] == 'x')
	{
		num = va_arg(args, int);
		x_form(num);
	}
	else if(str[i] == 'p')
	{
		p = va_arg(args, void *);
		printf("%p", p);
		//&p dont use because it gets the void pointer 
		// p_form(p);
	}
}

int ft_printf(char *str, ...)
{
	char flag = '%';
	char sum = 0;
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
			while(str[i] == 'c' || str[i] == 's' || str[i] == 'p' ||
				 str[i] == 'd' || str[i] == 'o' || str[i] == 'x')
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

	int sa = 123;
	printf("printf is |%x|\n", sa);
	ft_printf("ft_printf int is |%x|\n", sa);
}


//chars for p test
	// int saa[] = {123, 132};
	// int *sa = (int*)&saa;
	// // char *sb = "tweet";
	// // char *sc = "sdfg";
	// printf("pointer value is |%d|\n", *saa);
	// printf("pointer address is |%p|\n", saa);
	// //
	// printf("pointer address is |%#zx|\n", (size_t)(saa));
	// ft_printf("pointer in int is |%p|\n", saa); 


	// printf("pointer address is |%p|\n", (int*)&sa);
	// printf("pointer address is |%p|\n", (int*)&sa);
	// printf("pointer address is |%#zx|\n", (size_t)((int*)&sa));
	// ft_printf("pointer in int is |%p|\n", (int*)&sa); 

//ints for test