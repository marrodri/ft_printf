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

char *field_management(char *fstr, t_flags *st_flags)
{
	if (st_flags->fi_flag[1] == 1) // zero flag
	{
		if (st_flags->fi_width != 0)
			fstr = zero_flag(fstr, st_flags);
		//return (fstr);
	}

	if (st_flags->fi_flag[2] == 1) // minus flag, spaces to right
	{
		int dif;
		char *end_space;

		if ((dif = st_flags->fi_width - ft_strlen(fstr)) > 0)
		{
			//fix when there is a minus or an 0x sign  with the # flag
			end_space = ft_strnewc(' ', dif);
			fstr = ft_strjoin(fstr, end_space);
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
	}
	else
	{
		//default field management
		int		dif;
		char	*space;
		if ((dif = st_flags->fi_width - ft_strlen(fstr)) > 0)
		{
			space = ft_strnewc(' ', dif);
			fstr = ft_strjoin(space, fstr);
		}
	}
	return (fstr);
}

char	*hash_flag(char *fstr, char f)
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
		if ((f == 'd' || f == 'i') && str[0] != '-')
		{
			fstr = ft_strjoin("+", fstr);
		}
	}
	if (st_flags->fi_flag[4] == 1) //space flag
	{
		fstr = ft_strjoin(" ", fstr);
	}
	if (st_flags->fi_width > 0) //field management
	{
		fstr = field_management(fstr, st_flags);
	}
	return (fstr);
}
