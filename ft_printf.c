

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(char *str, ...)
{
	char sum = 0;
	int i = 0;
	va_list	args;
	t_fflags *form_flag;
	t_iflags *data_flag;

	va_start(args, str);

	while (str[i])
	{
	 	if (str[i] == '%')
	 	{
			set_flag(str, &i, form_flag);
			form_check(str, &i, args);
			i++;
		}
		ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (sum);
}

int main()
{
	char a = 'h';
	char b = 'l';
	char c = 'w';

	int ht= 1927521;

	int int_max = -1234;
	// ht = (long)ht;
	printf("a typecast = %d \n", ht);

	unsigned int oa =  1;
	ft_printf("octal test\n");
	printf("printf int u is |%#15d|\n", int_max);
	ft_printf("ft_printf int u is |%d|\n", int_max);
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

	//hexadecimal test
	// int sa = 3312312;

	// ft_printf("hex test\n");
	// printf("printf is |%x|\n", sa);
	// ft_printf("ft_printf int is |%x|\n", sa);