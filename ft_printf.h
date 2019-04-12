

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>


int ft_printf(char *str, ...);
void c_form(char c);
void s_form(char *str);

void d_form(int n);
void x_form(int n);
void o_form(int n);

#endif