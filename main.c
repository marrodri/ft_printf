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
	char a = 'H';
	char b = 's';
	char *c = "HELLLO s";

	int int_max = 1342;

	unsigned int oa =  1;
	ft_printf("octal test\n");
	printf("printf char a is |%c|, str b is |%s|, pointer b is|%10s|\n", a,c,c);
	ft_printf("ft_printf char a is |%c|, c is |%s|, pointer b is|%p| \n",a,c,c);
	printf("   printf is |%018o| |%#x|\n", int_max, int_max);
	ft_printf("ft_printf is |%018o| |%#x| tweet\n", int_max, int_max);
}

// int main()
// {
// 	char  a = 'a';
// 	char b = 'b';
// 	char c = 'c';
// 	printf("printf hello |%c| to |%c|\n", a, b, c);
// 	ft_printf("ftprin hello |%c| to |%c|\n", a, b, c);
// 	return 0;
// }
