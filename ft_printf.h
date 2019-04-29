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
# define FI_FLAG {'#','0','-','+',' '};
# define FO_FLAG {'h','l'};
# define SPEC_FORM {'c','s','p','d','o','u','x','X'};
# include "libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int fo_flag[FO_FLAG_SIZE]; //h, l
	int	fi_flag[FI_FLAG_SIZE]; 
	int fi_width;
	// int error;
}				t_flags;

typedef char	*t_char_form(va_list args);
int				ft_printf(char *str, ...);
void			set_fflags(char *str, int *i, t_flags **st_flag);
// void			set_iflags(char *str, int *i, t_flags **st_flag);
char			*set_form(char f, va_list args);
int				check_form(char f);
char			*c_form(va_list args);
char			*percen_char(va_list args);
char			*s_form(va_list args);
char			*p_form(va_list args);
char			*d_form(va_list args);
char			*x_form(va_list args);
char			*uppx_form(va_list args);
char			*o_form(va_list args);
char			*u_form(va_list args);

char			*ft_fstr(char *str, char f, t_flags *st_flag);
char			*zero_flag(char *fstr, char f, t_flags *st_flags);
#endif
