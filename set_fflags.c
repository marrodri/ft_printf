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
void init_flags(t_flags **st_flag)
{
	int i;
	// int *fo_flag;
	int *fi_flag;
	
	i = 0;
	// fo_flag = st_flag->fo_flag;
	fi_flag = (*st_flag)->fi_flag;
	(*st_flag)->fo_flag[1] = 1;
	while(i < 4)
	{
		(*st_flag)->fo_flag[1] = 1;
		i++;
	}
	i = 0;
	while(fi_flag[i])
	{
		fi_flag[i] = 2;
		i++;
	}
	(*st_flag)->fi_width = 3;
	return ;
}
void check_flags()
{

}

void set_fflags(char *str, int *i, t_flags **st_flag)
{
	int pos;
	char fre;

	fre = str[*i];
	pos = 0;
	init_flags(&*st_flag);
	
	// if(str[*i] == '#')
	// {
	// 	(*st_flag)->hash_flag = 1;
	// 	*i += 1;
	// 	return ;
	// }
}
