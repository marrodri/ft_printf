/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 19:00:07 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/27 19:00:08 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (str != NULL)
			{
				tstr = ft_fstr(tstr, str[i], st_flag);
				ft_putstr(tstr);
			}
			else
			{
				ft_putchar(str[i]);
				ft_putstr("format not included");
			}
			i++;
		}
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (sum);
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
