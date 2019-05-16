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

int		var_len(char *tstr, char *str, int *i, va_list args)
{

}

int		print_len(char *str, t_flags *st_flag, va_list args)
{
	int		sum;
	int		i;
	char	*tstr;

	sum = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			set_fflags(str, &i, &st_flag);
			tstr = (set_form(str[i], args, st_flag));
			if (str != NULL)
			{
				if (tstr[0] == '\0' && str[i] == 'c')
					sum++;
				tstr = format_str(tstr, str[i], st_flag);
				ft_putstr(tstr);
				sum = sum + (ft_strlen(tstr));
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
	return (sum);
}

int		ft_printf(char *str, ...)
{
	int		sum;
	va_list	args;
	t_flags	*st_flag;

	va_start(args, str);
	if ((st_flag = malloc(sizeof(t_flags))) == NULL)
		return (0);
	sum = print_len(str, st_flag, args);
	va_end(args);
	return (sum);
}
