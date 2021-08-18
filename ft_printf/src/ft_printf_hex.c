/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:26 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/18 21:25:44 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	printf_hash(t_print *p, t_flags *f)
{
	if ((*f).hashtag == YES)
	{
		if ((*f).specifier == LOWER_HEX)
			printf_putstr_fd(p, "0x", 2);
		else if ((*f).specifier == UPPER_HEX)
			printf_putstr_fd(p, "0X", 2);
	}
}

void	printf_hex(t_print *p, t_flags *f, unsigned int n)
{
	char *hex;

	if (n == 0)
		printf_putchar_fd(p, '0');
	else
	{
		hex = printf_itohex(n, (*f).specifier);
		if (hex)
		{
			printf_hash(p, f);
			printf_putstr_fd(p, hex, ft_strlen(hex));
			free(hex);
		}
	}
}
