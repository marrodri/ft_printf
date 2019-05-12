/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:22:49 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/27 20:22:56 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*field_management(char *fstr, t_flags *st_flags)
{
	if (st_flags->fi_flag[1] == 1)
		fstr = zero_flag(fstr, st_flags);
	if (st_flags->fi_flag[2] == 1)
		fstr = minus_flag(fstr, st_flags);
	else
		fstr = default_field(fstr, st_flags);
	return (fstr);
}

char	*prec_management(char *fstr, char f, t_flags *st_flags)
{
	if (f == 's')
		fstr = s_prec(fstr, st_flags);
	else if (f == 'd' || f == 'i' || f == 'x' || f == 'X' || f == 'u')
		fstr = dux_prec(fstr, st_flags);
	else if (f == 'o')
		fstr = o_prec(fstr, st_flags);
	return (fstr);
}

char	*format_str(char *str, char f, t_flags *st_flags)
{
	char *fstr;

	fstr = str;
	if (st_flags->prec_flag == 1)
		fstr = prec_management(fstr, f, st_flags);
	if (st_flags->fi_flag[0] == 1)
		fstr = hash_flag(fstr, f);
	if (st_flags->fi_flag[3] == 1)
		fstr = plus_flag(fstr, f);
	if (st_flags->fi_flag[4] == 1)
		fstr = space_flag(fstr, f);
	if (st_flags->fi_width > 0)
		fstr = field_management(fstr, st_flags);
	return (fstr);
}
