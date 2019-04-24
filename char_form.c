/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_form.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:39:40 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/23 15:39:44 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*c_form(va_list args)
{
	static char c[2];

	c[0] = (char)va_arg(args, int);
	c[1] = '\0';
	return (c);
}

char	*s_form(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	return (s);
}

char	*p_form(va_list args)
{
	void	*p;
	char	*s;

	p = va_arg(args, void *);
	s = ft_llitoa_base((long long int)p, 16);
	s = ft_strjoin("0x", s);
	return (s);
}
