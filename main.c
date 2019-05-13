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

char *str = "hello";
static char ch = 'a';
static int i_num = 1234;


	// //segfault with the # flag
	// printf("\n\ntest x\n");
	// printf("%#lx ", ulmax);
	// printf("%#llx", ullmax);
	// printf("\n");

	//IMPORTANT CHECK FT_STRJOIN TO FIX THE SEGFAULT when %#llx


	printf("877ans|%#8.5x|\n", 0);
	ft_printf("877tst|%#8.5x|\n", 0);

	printf("879ans|%#2.7x|\n", 3267);
	ft_printf("879tst|%#2.7x|\n", 3267);

	//test 884 : x_prec_width_fit_nofit_pos_lj_af

	// printf("884ans|%#-2.7x|\n", 3267);
	// ft_printf("884tst|%#-2.7x|\n", 3267);
	

	// Test  889:  x_prec_width_fn_pos_zpad_af
	// printf("889ans|%#02.7x|\n", 3267);
	// ft_printf("889tst|%#02.7x|\n", 3267);

	// Test  894:  x_prec_width_fn_pos_lj_zpad_af
	// printf("894ans|%#0-2.7x|\n", 3267);
	// ft_printf("894tst|%#0-2.7x|\n", 3267);

	//shows error in test, ask gavin
	// printf("%-5c", '\0');
	// ft_printf("%-5c", '\0');

	//test c overflow

	return (0);
}

		// printf("#7.5x|%#7.5x|\n", i_num);
		// printf("#8.5x|%#08.x|\n", i_num);
		// printf("%016d\n", ui_pos_1);