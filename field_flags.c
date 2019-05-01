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

char	*hash_flag(char *fstr, char f)
{
	if (f == 'o')
		fstr = ft_strjoin("0", fstr);
	else if (f == 'x')
		fstr = ft_strjoin("0x", fstr);
	else if (f == 'X')
		fstr = ft_strjoin("0X", fstr);
	return (fstr);
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
