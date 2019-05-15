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
static double db = 10.496992423423;
static long double Ldb = 10.496992423423;

	long double tst = 1.5;
	printf("ans|%Lf|\n",tst);
	ft_printf("tst|%Lf|\n",tst);
	// printf("ans|%f|\n", -23.0041);
	// ft_printf("tst|%f|\n", -23.0041);

	// printf("ans+f_as_prec0p_as|%+.0f|\n", 7.4);
	// ft_printf("tst+f_as_prec0p_as|%+.0f|\n", 7.4);

	// printf("ans +.3|%+.3f|\n", 0.0);
	// ft_printf("tst +.3|%+.3f|\n", 0.0);

	// printf("ans _05.f|% 05.0f|\n", 7.3);
	// ft_printf("tst _05.f|% 05.0f|\n", 7.3);

	// printf("ans _05d|% 05d|\n", 7);
	// ft_printf("tst _05d|% 05d|\n", 7);
	// printf("this |%Lf| float\n", 1.5l);
	// ft_printf("this |%Lf| float\n", 1.5l);



	//shows error in test, ask gavin
	// printf("%-5c", '\0');
	// ft_printf("%-5c", '\0');

	//test c overflow

	return (0);
}
