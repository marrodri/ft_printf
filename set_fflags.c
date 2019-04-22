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
void check_flags()
{

}

void set_fflags(char *str, int *i, t_fflags **st_fflag)
{
	(*st_fflag)->hash_flag = 0;
	(*st_fflag)->cero_flag = 0;
	(*st_fflag)->minus_flag = 0;
	(*st_fflag)->plus_flag = 0;
	(*st_fflag)->field_width = 0;

	if(str[*i] == '#')
	{
		// printf("hash found\n");
		(*st_fflag)->hash_flag = 1;
		*i += 1;
		return ;
	}
	else if(str[*i] == '0')
	{
		(*st_fflag)->cero_flag = 1;
		*i += 1;
		if(str[*i] >= '1' && str[*i] <= '9')
		{
			(*st_fflag)->field_width = ft_atoi(&str[*i]);
		}
		while(str[*i] >= '1' && str[*i] <= '9')
		{
			*i += 1;
		}
		return ;
	}
	else if(str[*i] == '-')
	{
		(*st_fflag)->minus_flag = 1;
		*i += 1;
		if(str[*i] >= '1' && str[*i] <= '9')
		{
			(*st_fflag)->field_width = ft_atoi(&str[*i]);
		}
		while(str[*i] >= '1' && str[*i] <= '9')
		{
			*i += 1;
		}
		return ;
	}

	// if (str[*i] == 'h')
	// {
	// 	if(str[*i + 1] == 'h')
	// 	{
	// 		i++;
	// 	}
	// 	else
	// 	{

	// 	}
	// 	c = va_arg(args, short int);

	// }
	// else if (str[*i] == 'l')
	// {
	// 	if(str[*i + 1] == 'l')
	// 	{

	// 	}
	// 	else
	// 	{

	// 	}
	// 	s = va_arg(args, char *);
	// 	s_form(s);
	// }
	// else if (str[*i] == 'h' || str[*i] == 'i')
	// {
	// 	num = va_arg(args, int);
	// 	d_form(num);
	// }
}
