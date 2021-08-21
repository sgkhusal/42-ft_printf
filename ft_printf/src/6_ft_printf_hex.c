/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_ft_printf_hex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:26 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/21 18:30:17 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	printf_hash(t_print *p, t_flags *f, char c)
{
	if ((*f).hashtag == YES && c != '0')
	{
		(*f).width -= 2;
		if ((*f).specifier == LOWX)
			printf_putstr_fd(p, "0x", 2);
		else if ((*f).specifier == UPPX)
			printf_putstr_fd(p, "0X", 2);
	}
}

static void	printf_hex(t_print *p, t_flags *f, char *hex)
{
	if (hex[0] == '0')
		printf_zero(p, f);
	else
	{
		if ((*f).specifier == UPPX)
			ft_toupper_str(hex);
		printf_putstr_fd(p, hex, ft_strlen(hex));
		free(hex);
	}
}

static int	printf_print_xsize(t_flags *f, int size, char c)
{
	if ((*f).point == YES && (*f).precision == 0 && c == '0')
		return (0);
	if ((*f).precision > size)
	{
		if ((*f).hashtag == YES && c != '0')
			return ((*f).precision + 2);
		else
			return ((*f).precision);
	}
	else
	{
		if ((*f).hashtag == YES && c != '0')
			return (size + 2);
		else
			return (size);
	}
}

static void	printf_rjust_x(t_print *p, t_flags *f, char *hex, int size)
{
	if ((*f).point == NO)
	{
		if ((*f).zero == YES)
		{
			printf_hash(p, f, hex[0]);
			printf_pad(p, (*f).width, size, '0');
		}
		else
		{
			if ((*f).hashtag == YES && hex[0] != '0')
				size += 2;
			printf_pad(p, (*f).width, size, ' ');
			printf_hash(p, f, hex[0]);
		}
		printf_hex(p, f, hex);
	}
	else
	{
		printf_pad(p, (*f).width, printf_print_xsize(f, size, hex[0]), ' ');
		printf_hash(p, f, hex[0]);
		printf_pad(p, (*f).precision, size, '0');
		printf_hex(p, f, hex);
	}
}

void	printf_x(t_print *p, t_flags *f, unsigned int n)
{
	char	*hex;
	int		size;

	hex = printf_itohex(n);
	if (hex)
	{
		size = ft_strlen(hex);
		if ((*f).minus == YES)
		{
			printf_hash(p, f, hex[0]);
			printf_pad2(p, f, size, '0');
			printf_hex(p, f, hex);
			if ((*f).point == YES && n == 0)
				size = 0;
			printf_pad(p, (*f).width, size, ' ');
		}
		else
			printf_rjust_x(p, f, hex, size);
	}
}
