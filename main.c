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

	long long int int_max = -1342;

	unsigned int oa =  1;
	//ft_printf("octal test\n");
	//printf("printf char a is |%c|, str b is |%s|, pointer b is|%10s|\n", a,c,c);
	//ft_printf("ft_printf char a is |%c|, c is |%s|, pointer b is|%p| \n",a,c,c);
	printf("   printf is |%llx| |%llx|\n", int_max, int_max);
	ft_printf("ft_printf is |%lld| |%#015x| tweet\n", int_max, int_max);
}
