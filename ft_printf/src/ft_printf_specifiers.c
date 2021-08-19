/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:01:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/19 01:59:55 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	check_specifier(t_flags *f, t_print *p, const char c)
{
	if (ft_strchr(CONVERSIONS, c))
	{
		(*p).i++;
		(*f).specifier = c;
		return (YES);
	}
	else
		return (NO);
}

void	print_specifier(t_print *p, t_flags *f, va_list args)
{
	if ((*f).specifier == '%')
		printf_putchar_fd(p, '%');
	else if ((*f).specifier == 'c')
		printf_c(p, f, (char)va_arg(args, int));
	else if ((*f).specifier == 's')
		printf_s(p, f, va_arg(args, char *));
	else if ((*f).specifier == 'd')
		printf_id(p, f, (long int)va_arg(args, int));
	else if ((*f).specifier ==  'i')
		printf_id(p, f, (long int)va_arg(args, int));
	else if ((*f).specifier == 'u')
		printf_u(p, f, va_arg(args, unsigned int));
	else if ((*f).specifier == 'p')
		printf_ptr(p, va_arg(args, unsigned long int));
		//printf_ptr(p, f, va_arg(args, unsigned long int));
	else if (((*f).specifier == LOWX) || ((*f).specifier == UPPX))
		printf_hex(p, f, va_arg(args, unsigned int));
}
