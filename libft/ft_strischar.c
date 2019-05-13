/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strischar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:37:16 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/13 11:38:20 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strischar(char *str, char c)
{
	int i;

	i = 0;
	while(str[i] == c)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
