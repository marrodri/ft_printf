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

typedef struct s_iflags
{
	int l_flag;
	int ll_flag;
	int h_flag;
	int hh_flag;
}	t_iflags;

typedef struct s_fflags
{
	int hash_flag;
	int cero_flag;
	int	minus_flag;
	int plus_flag;
	int field_width;
}	t_fflags;


int ft_printf(char *str, ...);

void set_fflags(char *str, int *i, t_fflags **st_fflag);
void set_iflags(char *str, int *i, t_iflags **st_iflag);
char *form_check(char *str, int *i, va_list args);
char *ft_fstr(char *str, char f, t_fflags *flags);

void c_form(char c);
void s_form(char *str);

char *d_form(int n);
char *x_form(int n);
char *X_form(int n);
char *o_form(int n);
char *u_form(unsigned int n);

#endif
