/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 19:00:07 by marrodri          #+#    #+#             */
/*   Updated: 2019/04/27 19:00:08 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int		len_var()
// {
// 	return 0;
// }

int				ft_printf(char *str, ...)
{
	int	sum;
	char	*tstr;
	int		i;
	va_list	args;
	t_flags	*st_flag;

	va_start(args, str);
	i = 0;
	sum = 0;
	if ((st_flag = malloc(sizeof(t_flags))) == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			set_fflags(str, &i, &st_flag);
			tstr = (set_form(str[i], args, st_flag));
			if (str != NULL)
			{
				tstr = format_str(tstr, str[i], st_flag);
				ft_putstr(tstr);
				if (tstr[0] == '\0' && str[i] == 'c')
					sum = 1;
				sum = sum + (ft_strlen(tstr));
			}
			else
			{
				ft_putchar(str[i]);
				ft_putstr("format not included");
			}
			i++;
		}
		if (str[i] != '%' && str[i])
		{
			ft_putchar(str[i]);
			i++;
			sum++;
		}
	}
	va_end(args);
	return (sum);
}
