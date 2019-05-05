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
static char 		ch_pos_1 = 100, ch_neg_1 = -87;
static short		sh_pos_1 = 3047, sh_neg_1 = -8875;
static int			i_pos_1 = 878023;
static long		l_pos_1 = 22337203685477, l_neg_1 = -22337203685477;
static long long	ll_pos_1 = 22337203685477, ll_neg_1 = -22337203685477;
static long		lmax	= 9223372036854775807;
static long		lmin	= -9223372036854775807;
static long long llmax = 9223372036854775807;
static long		llmin = -9223372036854775807;


//unsigned integers
static unsigned char 		uch_pos_1 = 100;
static unsigned short		ush_pos_1 = 3047;
static unsigned int		ui_pos_1 = 878023;
static unsigned long		ul_pos_1 = 22337203685477;
static unsigned long long	ull_pos_1 = 22337203685477;
static unsigned long long  ullmax = 9223372036854775807;
static unsigned long  		ulmax = 9223372036854775807;

static float fl = 10.496992423423;

	// printf("test d\n");
	// printf("%lld %d %ld", ll_neg_1, i_pos_1, l_pos_1);
	// printf("\n");
	// ft_printf("%lld %d %ld", ll_neg_1, i_pos_1, l_pos_1);


	// //segfault with the # flag
	// printf("\n\ntest x\n");
	// printf("%#lx ", ulmax);
	// printf("%#llx", ullmax);
	// printf("\n");

	//IMPORTANT CHECK FT_STRJOIN TO FIX THE SEGFAULT when %#llx
	printf("%.4f", fl);
	ft_printf("%10d", i_pos_1);

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