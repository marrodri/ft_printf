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


#include <stdio.h>
void init_flags(t_flags *st_flag)
{
	int i;

	i = 0;
	while (i < FO_FLAG_SIZE)
	{
		st_flag->fo_flag[i] = 0;
		i++;
	}
	i = 0;
	while (i < FI_FLAG_SIZE)
	{
		st_flag->fi_flag[i] = 0;
		i++;
	}
	st_flag->fi_width = 0;
	return ;
}
void check_flags(char f, t_flags *st_flag)
{
	const char fi_flags[FI_FLAG_SIZE] = FI_FLAG;
	// if(str[*i] == '#')
	// {
	// 	(*st_flag)->hash_flag = 1;
	// 	*i += 1;
	// 	return ;
	// }

}

void set_fflags(char *str, int *i, t_flags **st_flag)
{
	int			pos;
	const char	forms[8] = SPEC_FORM;

	pos = 0;
	init_flags(*st_flag);
	check_flags(str[*i], *st_flag);
	// while (str[*i] != '%' && str[*i] != 'x')
	// {
	// 	*i += 1;
	// }
	return ;
}
