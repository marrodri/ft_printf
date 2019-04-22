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

char *form_check(char *str, int *i, va_list args)
{
	char *c;
	char *s;
	unsigned char *p;
	int num;
	unsigned int u_num;

	*i += 1;
	if (str[*i] == 'c')
	{
		*c = va_arg(args, int);
		return (c);
	}
	else if (str[*i] == 's')
	{
		s = va_arg(args, char *);
		return ((s));
	}
	else if (str[*i] == 'd' || str[*i] == 'i')
	{
		num = va_arg(args, int);
		return (d_form(num));
	}
	else if (str[*i] == 'x')
	{
		num = va_arg(args, int);
		return (x_form(num));
	}
	else if (str[*i] == 'X')
	{
		num = va_arg(args, int);
		return (X_form(num));
	}
	else if (str[*i] == 'o')
	{
		num = va_arg(args, int);
		return (o_form(num));
	}
	else if (str[*i] == 'u')
	{
		u_num = va_arg(args, unsigned int);
		return (u_form(u_num));
	}

	// else if (str[*i] == 'p')
	// {
	// 	p = va_arg(args, void *);
	// 	// printf("%p", p);
	// 	//&p dont use because it gets the void pointer 
	// 	// p_form(p);
	// }
}
