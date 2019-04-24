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
// # define FI_FLAG {'#','0','-','+'}
# include "libft/libft.h"
# include <stdarg.h>


typedef struct	s_flags
{
	int fo_flag[4]; //hh, h, l, ll
	int	fi_flag[4]; // #,0,-,+
	int fi_width;
}				t_flags;

// typedef struct	s_iflags
// {
// 	int l_flag;
// 	int ll_flag;
// 	int h_flag;
// 	int hh_flag;
// }				t_iflags;

// typedef struct	s_fflags
// {
// 	int hash_flag;
// 	int cero_flag;
// 	int	minus_flag;
// 	int plus_flag;
// 	int field_width;
// }				t_fflags;

typedef char	*char_form(va_list args);

int				ft_printf(char *str, ...);

void			set_fflags(char *str, int *i, t_flags **st_flag);
void			set_iflags(char *str, int *i, t_flags **st_flag);

char			*set_form(char f, va_list args);

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
#endif
