/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:55:19 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/09 15:55:34 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>


int main()
{
	signed char ch = 65;
	char b = 's';
	char *c = "HELLLO s";

	int int_max = 1342232;

	unsigned int oa =  1;
	
	printf("   printf is |%c| |%d|\n", ch, int_max);
	ft_printf("ft_printf is |%c| |%d| tweet\n", ch, int_max);

	char *str = "hello";
	int num1 = 12345679;
    printf("float2 |%10.8d|\n",num1);

	return (0);
}
	/*signed char test */
	// signed char char1 = 65; //255
	// unsigned char char2 = 65; //255
    // printf("\n\nSigned char : %c\n",char1);
	// //prints as a SIGNED form, instead of USIGNED
    // printf("Unsigned char : %c\n",char2);

	/*old tests */
	//printf("printf char a is |%c|, str b is |%s|, pointer b is|%10s|\n", a,c,c);
	//ft_printf("ft_printf char a is |%c|, c is |%s|, pointer b is|%p| \n",a,c,c);
	// printf("   printf is |%-#15x| |%llx|\n", int_max, int_max);
	// ft_printf("ft_printf is |%-#15x| |%#015x| tweet\n", int_max, int_max);

	/*float and precission test */
	// float FL1 = 65; //255
	// float FL2 = 65; //255
    // printf("\n\nfloat1 |%7.3f|\n",FL1);
    // printf("float2 |%010.3f|\n",FL2);