
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
	else if(str[i] == 'x' || str[i] == 'X')
	{
		num = va_arg(args, int);
		x_form(num, str[i]);
	}
	else if(str[i] == 'o')
	{
		num = va_arg(args, int);
		o_form(num);
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

	int sa = 1233;

	ft_printf("hex test\n");
	printf("printf is |%X|\n", sa);
	ft_printf("ft_printf int is |%X|\n", sa);

	int ht= -1927525771;
	//ht = (long)ht;
	printf("a typecast = %ld\n", ht);

	long int oa =  333333333;
	ft_printf("octal test\n");
	printf("printf int is |%lo|\n", oa);
	ft_printf("ft_printf int is |%o|\n", oa);
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