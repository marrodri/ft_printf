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
	if (st_flags->fi_flag[1] == 1) // zero flag
	{
		fstr = zero_flag(fstr, st_flags);
	}
	if (st_flags->fi_flag[2] == 1) // minus flag, spaces to right
	{
		fstr = minus_flag(fstr, st_flags);
	}
	else
	{
		//default field management
		fstr = default_field(fstr, st_flags);
	}
	return (fstr);
}

char	*ft_fstr(char *str, char f, t_flags *st_flags)
{
	char *fstr;

	fstr = str;
	if (st_flags->fi_flag[0] == 1) //hash flag
	{
		fstr = hash_flag(fstr, f);
	}
	if (st_flags->fi_flag[3] == 1) // plus flag
	{
		fstr = plus_flag(fstr, f);
	}
	if (st_flags->fi_flag[4] == 1) //space flag
	{
		fstr = space_flag(fstr, f);
	}
	if (st_flags->fi_width > 0) //field management
	{
		fstr = field_management(fstr, st_flags);
	}
	return (fstr);
}
