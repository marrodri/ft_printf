

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(char *str, ...)
{
	char sum = 0;
	char *test;
	int i = 0;
	va_list	args;
	t_fflags *form_flag;
	t_iflags *data_flag;

	va_start(args, str);
	if((form_flag = malloc(sizeof(t_fflags))) == NULL)
		return 0;
	while (str[i])
	{
	 	if (str[i] == '%')
	 	{
			set_fflags(str, &i, &form_flag);
			test = (form_check(str, &i, args));
			ft_putstr(test);
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

	long long int ht= 1927531;

	int int_max = 1231234;
	// ht = (long)ht;
	printf("a typecast = %d \n", ht);

	unsigned int oa =  1;
	ft_printf("octal test\n");
	printf("printf int u is |%15llX|\n", int_max);
	ft_printf("ft_printf int u is |%X|\n", int_max);
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