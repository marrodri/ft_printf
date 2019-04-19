/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:33:11 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/17 20:33:15 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define INT_MIN
# define INT_MAX
# include "libft/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int hash_flag;
	int cero_flag;
	int	minus_flag;
	int plus_flag;
	int l_flag;
	int ll_flag;
	int h_flag;
	int hh_flag;
	int per_flag;
}	t_flags;


int ft_printf(char *str, ...);
void form_check(char *str, int *i, va_list args);


void c_form(char c);
void s_form(char *str);

void d_form(int n);
void x_form(int n, char ca);
void o_form(int n);
void u_form(unsigned int n);

#endif
