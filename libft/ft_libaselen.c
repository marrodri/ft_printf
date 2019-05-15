/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libaselen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 11:40:00 by marrodri          #+#    #+#             */
/*   Updated: 2019/05/15 11:40:04 by marrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int		ft_libaselen(long long int n, int base)
{
	long long int len;

	len = 0;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	len++;
	return (len);
}
