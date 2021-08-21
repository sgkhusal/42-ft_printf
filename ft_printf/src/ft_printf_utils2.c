/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 00:20:18 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/21 04:04:56 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_highnb(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

int	ft_printf_atoi(t_print *p, const char *nptr, int *i)
{
	unsigned long long		n;

	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + (*nptr - 48);
		nptr++;
		(*p).i++;
		(*i)++;
	}
	return (n);
}
