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
#include <stdio.h>

char *field_management(char *fstr, char f, t_flags *st_flags)
{
	if (st_flags->fi_flag[1] == 1) // zero flag
	{
		if (st_flags->fi_width != 0)
		{
			fstr = zero_flag(fstr, f, st_flags);
		}
		return (fstr);
	}

	// default field precision not implemented, put this inside in field management
	
	if (st_flags->fi_flag[2] == 1) // minus flag, spaces to right
	{
		if (st_flags->fi_width != 0)
		{
			int dif;
			char *end_space;
			dif = st_flags->fi_width - ft_strlen(fstr);
			if (dif > 0)
			{
				//fix when there is a minus or an 0x sign  with the # flag
				end_space = ft_strnewc(' ', dif);
				fstr = ft_strjoin(fstr, end_space);
			}
		}
	}
	if (st_flags->fi_flag[4] == 1) //space flag, spaces to left
	{
		int dif;
		char *space;
		if ((dif = st_flags->fi_width - ft_strlen(fstr)) > 0)
		{
			space = ft_strnewc(' ', dif);
			fstr = ft_strjoin(space, fstr);
		}
		else
		{
			fstr = ft_strjoin(" ", fstr);
		}
	}
	return fstr;
}

char *hash_flag(char *fstr, char f)
{
	if (f == 'o')
	{
		fstr = ft_strjoin("0", fstr);
	}
	else if (f == 'x')
	{
		fstr = ft_strjoin("0x", fstr);
	}
	else if (f == 'X')
	{
		fstr = ft_strjoin("0X", fstr);
	}
	return (fstr);
}

char *ft_fstr(char *str, char f, t_flags *st_flags)
{
	char *fstr;

	fstr = str;
	if (st_flags->fi_flag[0] == 1) //hash flag
	{
		fstr = hash_flag(fstr, f);
	}
	if (st_flags->fi_flag[3] == 1) // plus flag
	{
		if ((f == 'd' || f == 'i') && str[0] != '-')
		{
			fstr = ft_strjoin("+", fstr);
		}
	}
	if (st_flags->fi_width > 0)
	{
		fstr = field_management(fstr, f, st_flags);
	}
	return (fstr);
}