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

char	*char_form(char f, va_list args)
{
	static char		c[2];
	char			*s;
	void			*p;

	if (f == 'c')
	{
		c[0] = (char)va_arg(args, int);
		c[1] = '\0';
		return (c);
	}
	else if (f == 's')
	{
		s = va_arg(args, char *);
		return (s);
	}
	else if (f == 'p')
	{
		p = va_arg(args, void *);
		s = ft_llitoa_base((long long int)p, 16);
		s = ft_strjoin("0x", s);
		return (s);
	}
	return (NULL);
}
