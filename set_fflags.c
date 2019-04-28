/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_fflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 15:32:38 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/22 15:32:42 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_flags(t_flags *st_flag)
{
	int i;

	i = 0;
	while (i < FI_FLAG_SIZE)
	{
		st_flag->fi_flag[i] = 0;
		i++;
	}
	i = 0;
	while (i < FO_FLAG_SIZE)
	{
		st_flag->fo_flag[i] = 0;
		i++;
	}
	st_flag->fi_width = 0;
	return ;
}

void	ignore_case(t_flags *st_flag)
{
	if (st_flag->fi_flag[2] == 1)
	{
		st_flag->fi_flag[1] = 0;
	}
	if (st_flag->fi_flag[3] == 1)
	{
		st_flag->fi_flag[4] = 0;
	}
	return ;
}

void	check_flags(char f, t_flags *st_flag)
{
	int			pos;
	const char	fi_flags[FI_FLAG_SIZE] = FI_FLAG;
	const char	fo_flags[FO_FLAG_SIZE] = FO_FLAG;

	pos = 0;
	while (pos < FI_FLAG_SIZE)
	{
		if (fi_flags[pos] == f)
			st_flag->fi_flag[pos] = 1;
		pos++;
	}
	pos = 0;
	while (pos < FO_FLAG_SIZE)
	{
		if (fo_flags[pos] == f)
			st_flag->fo_flag[pos] += 1;
		pos++;
	}
	ignore_case(st_flag);
	return ;
}

void	check_field(char *str, int *i, t_flags *st_flag)
{
	if (str[*i] >= '1' && str[*i] <= '9')
	{
		st_flag->fi_width = ft_atoi(&str[*i]);
		while (str[*i] >= '0' && str[*i] <= '9')
			*i += 1;
	}
}

void	set_fflags(char *str, int *i, t_flags **st_flag)
{
	int			pos;
	const char	forms[8] = SPEC_FORM;

	pos = 0;
	init_flags(*st_flag);
	while ((check_form(str[*i])) == -1)
	{
		check_flags(str[*i], *st_flag);
		*i += 1;
		check_field(str, i, *st_flag);
	}
	return ;
}
