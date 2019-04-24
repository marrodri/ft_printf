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

char	*form_check(char *str, int *i, va_list args)
{
	
	int				num;
	unsigned int	u_num;

	if (str[*i] == 'c' || str[*i] == 's' || str[*i] == 'p')
	{

		return (char_form(str[*i], args));
	}

	else if (str[*i] == 'd' || str[*i] == 'i' || str[*i] == 'o' ||
		str[*i] == 'u' || str[*i] == 'x' || str[*i] == 'X')
	{
		num = va_arg(args, int);
		return (d_form(num));
	}
	// else if (str[*i] == 'x')
	// {
	// 	num = va_arg(args, int);
	// 	return (x_form(num));
	// }
	// else if (str[*i] == 'X')
	// {
	// 	num = va_arg(args, int);
	// 	return (X_form(num));
	// }
	// else if (str[*i] == 'o')
	// {
	// 	num = va_arg(args, int);
	// 	return (o_form(num));
	// }
	// else if (str[*i] == 'u')
	// {
	// 	u_num = va_arg(args, unsigned int);
	// 	return (u_form(u_num));
	// }
	return (NULL);
}
