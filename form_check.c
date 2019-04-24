/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   form_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 20:32:36 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/17 20:32:59 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		check_form(char f)
{
	int		pos;
	char	form[8];

	form[0] = 'c';
	form[1] = 's';
	form[2] = 'p';
	form[3] = 'd';
	form[4] = 'o';
	form[5] = 'u';
	form[6] = 'x';
	form[7] = 'X';
	pos = 0;
	if (f == 'i')
		return (3);
	while (f != form[pos] && form[pos])
		pos++;
	if (f == form[pos])
		return (pos);
	else
		return (-1);
}

char	*set_form(char f, va_list args)
{
	int				pos;
	char_form		*c_str[8];

	if(f == '%')
	{
		return "\%";
	}
	pos = check_form(f);
	c_str[0] = c_form;
	c_str[1] = s_form;
	c_str[2] = p_form;
	c_str[3] = d_form;
	c_str[4] = o_form;
	c_str[5] = u_form;
	c_str[6] = x_form;
	c_str[7] = uppx_form;
	if (pos != -1)
		return (c_str[pos](args));
	else
		return (NULL);
}
