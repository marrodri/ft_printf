

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define INT_MIN
# define INT_MAX
# include "libft/libft.h"
# include <stdarg.h>


int ft_printf(char *str, ...);

char *ft_int_to_hex(int n);
long int ft_dec_to_oct(int n);


void c_form(char c);
void s_form(char *str);

void d_form(int n);
void x_form(int n);
void o_form(int n);

#endif