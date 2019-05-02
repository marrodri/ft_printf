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

char	*d_form(va_list args)
{
	char	*num;
	int		n;
	// signed char sig_ch;

	n = va_arg(args, int);
	num = ft_itoa(n);
	return (num);
}

char	*x_form(va_list args)
{
	char			*hex;
	unsigned int	n;
	// unsigned char	un_char;  hh
	// unsigned short_int us_int;  h
	// unsigned long int ul_int;  l
	// unsigned long long int ull_int;  ll

	n = va_arg(args, unsigned int);
	hex = ft_llitoa_base(n, 16);
	return (hex);
}

char	*uppx_form(va_list args)
{
	char			*hex;
	unsigned int	n;
	// unsigned char	un_char;  hh
	// unsigned short_int us_int;  h
	// unsigned long int ul_int;  l
	// unsigned long long int ull_int;  ll

	n = va_arg(args, unsigned int);
	hex = ft_llitoa_base(n, 16);
	ft_strupper(hex);
	return (hex);
}

char	*o_form(va_list args)
{
	char				*oct;
	unsigned int		n;
	// unsigned char	un_char; hh
	// unsigned short_int us_int;  h
	// unsigned long int ul_int;  l
	// unsigned long long int ull_int;  ll

	n = va_arg(args, unsigned int);
	oct = ft_llitoa_base(n, 8);
	return (oct);
}

char	*u_form(va_list args)
{
	char			*u_num;
	unsigned int	n;
	// unsigned char	un_char;  hh
	// unsigned short_int us_int;  h
	// unsigned long int ul_int;  l
	// unsigned long long int ull_int;  ll

	n = va_arg(args, unsigned int);
	u_num = ft_uitoa(n);
	return (u_num);
}
