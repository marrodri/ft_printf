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
# define FI_FLAG_SIZE 5
# define FO_FLAG_SIZE 2
# define SPEC_FORM_SIZE 8
// # define CSP_FORM_SIZE 3
// # define DIOUX_FORM_SIZE 5
# define FI_FLAG {'#','0','-','+',' '};
# define FO_FLAG {'h','l'};
# define SPEC_FORM {'c','s','p','d','o','u','x','X'};
// # define CSP_FORM {'c','s','p'};
// # define DIOUX_FORM {'d','o','u','x','X'};
# include "libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int fo_flag[FO_FLAG_SIZE]; 
	int	fi_flag[FI_FLAG_SIZE]; 
	int fi_width;
}				t_flags;

typedef char	*t_char_form(va_list args, t_flags *st_flag);
// typedef char	*t_csp_form(va_list args);
// typedef char	*t_dioux_form(va_list args, t_flags *st_flag);
int				ft_printf(char *str, ...);
void			set_fflags(char *str, int *i, t_flags **st_flag);
char			*set_form(char f, va_list args, t_flags *st_flag);
int				check_form(char f);
char			*c_form(va_list args, t_flags *st_flag);
char			*percen_char(va_list args, t_flags *st_flag);
char			*s_form(va_list args, t_flags *st_flag);
char			*p_form(va_list args, t_flags *st_flag);

char			*d_check(va_list args, t_flags *st_flag);
char			*d_form(va_list args);
char			*hd_form(va_list args);
char			*ld_form(va_list args);
char			*hhd_form(va_list args);
char			*lld_form(va_list args);

char			*x_check(va_list args, t_flags *st_flag);
char			*x_form(va_list args);
char			*hx_form(va_list args);
char			*lx_form(va_list args);
char			*hhx_form(va_list args);
char			*llx_form(va_list args);

char			*uppx_check(va_list args, t_flags *st_flag);
char			*uppx_form(va_list args);
char			*huppx_form(va_list args);
char			*luppx_form(va_list args);
char			*hhuppx_form(va_list args);
char			*lluppx_form(va_list args);

char			*o_check(va_list args, t_flags *st_flag);
char			*o_form(va_list args);
char			*ho_form(va_list args);
char			*lo_form(va_list args);
char			*hho_form(va_list args);
char			*llo_form(va_list args);

char			*u_check(va_list args, t_flags *st_flag);
char			*u_form(va_list args);
char			*hu_form(va_list args);
char			*lu_form(va_list args);
char			*hhu_form(va_list args);
char			*llu_form(va_list args);

char			*ft_fstr(char *str, char f, t_flags *st_flag);
char			*zero_flag(char *fstr, t_flags *st_flag);
char 			*default_field(char *fstr, t_flags *st_flag);
char 			*minus_flag(char *fstr, t_flags *st_flag);
char			*hash_flag(char *fstr, char f);
char			*plus_flag(char *fstr, char f);
char			*space_flag(char *fstr, char f);
#endif
