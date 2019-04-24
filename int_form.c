/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_form.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:39:20 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/23 15:39:23 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*d_form(int n)
{
	char *num;

	num = ft_itoa(n);
	return (num);
}

char	*x_form(int n)
{
	char *hex;

	hex = ft_llitoa_base(n, 16);
	return (hex);
}

char	*upper_x_form(int n)
{
	char *hex;

	hex = ft_llitoa_base(n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*o_form(int n)
{
	char *oct;

	oct = ft_llitoa_base(n, 8);
	return (oct);
}

char	*u_form(unsigned int n)
{
	char *u_num;

	u_num = ft_uitoa(n);
	return (u_num);
}

char *int_form(char f, va_list args)
{
	

}
