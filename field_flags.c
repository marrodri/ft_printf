/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 15:51:13 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/01 15:51:16 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
char	*hash_flag(char *str, char f)
{
	if (f == 'o')
	{

		str = ft_strjoin("0", str);
	}
	else if (f == 'x')
	{
		str = ft_strjoin("0x", str);
	}
	else if (f == 'X')
		str = ft_strjoin("0X", str);
	return (str);
}

char	*plus_flag(char *fstr, char f)
{
	if ((f == 'd' || f == 'i') && fstr[0] != '-')
		fstr = ft_strjoin("+", fstr);
	return (fstr);
}

char	*space_flag(char *fstr, char f)
{
	//newly added, check for errors in the future
	if ((f == 'd' || f == 'i') && fstr[0] != '-')
		fstr = ft_strjoin(" ", fstr);
	return (fstr);
}