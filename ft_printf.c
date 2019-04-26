

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(char *str, ...)
{
	char sum;
	char *tstr;
	int i;
	va_list	args;
	t_flags *st_flag;

	va_start(args, str);
	i = 0;
	sum = 0;
	if ((st_flag = malloc(sizeof(t_flags))) == NULL)
		return (0);
	
	while (str[i])
	{
	 	if (str[i] == '%')
	 	{
			// printf("char is %c\n", str[i]);
			i++;
			set_fflags(str, &i, &st_flag);
			// for(int j = 0;j < FO_FLAG_SIZE; j++)
			// {
			// 	printf("fo_flag[%d] is %d\n", j, st_flag->fo_flag[j]);
			// }
			// for(int x = 0; x < FI_FLAG_SIZE; x++)
			// {
			// 	printf("fi_flag[%d] is %d\n", x, st_flag->fi_flag[x]);
			// }
			// printf("fi width is %d\n", st_flag->fi_width);
			// printf("char is %c\n", str[i]);
			tstr = (set_form(str[i], args));
			if(str != NULL)
			{
				// str = ft_fstr(str, str[i], st_flag);
				ft_putstr(tstr);
			}
			else
			{
				ft_putchar(str[i]);
				ft_putstr(" format not included");
			}
			i++;
		}
		if(str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (sum);
}

int main()
{
	// char a = 'H';
	// char b = 's';
	// char *c = "HELLLO s";

	int int_max = 1234;

	// unsigned int oa =  1;
	ft_printf("octal test\n");
	// printf("printf char a is |%c|, str b is |%s|, pointer b is|%10s|\n", a,c,c);
	// ft_printf("ft_printf char a is |%c|, c is |%s|, pointer b is|%p| \n",a,c,c);
	printf("printf int u is |%#o %-x|\n", int_max, int_max);
	ft_printf("ft_printf int d is |%#+0o %-x| tweet\n", int_max, int_max);
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