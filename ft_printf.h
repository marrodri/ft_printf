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

int ft_printf(char *str, ...);
void check_flag(char *str, int i, va_list args);


void c_form(char c);
void s_form(char *str);

void d_form(int n);
void x_form(int n, char ca);
void o_form(int n);

#endif
