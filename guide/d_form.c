/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_form.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 15:13:15 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/02 15:13:17 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*lld_form(va_list args)
{
	char				*num;
	long long int		ll_n;

	ll_n = va_arg(args, long long int);
	num = ft_llitoa(ll_n);
	return (num);
}

char	*hhd_form(va_list args)
{
	char			*num;
	signed char		hh_ch;

	hh_ch = va_arg(args, signed char);
	num = ft_itoa(hh_ch);
	return (num);
}

char	*ld_form(va_list args)
{
	char		*num;
	long int	l_n;

	l_n = va_arg(args, int);
	num = ft_llitoa(l_n);
	return (num);
}

char	*hd_form(va_list args)
{
	char		*num;
	short int	h_n;

	h_n = va_arg(args, signed char);
	num = ft_itoa(h_n);
	return (num);
}

char	*d_form(va_list args)
{
	char	*num;
	int		n;

	n = va_arg(args, int);
	num = ft_itoa(n);
	return (num);
}
