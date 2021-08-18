/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:01:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/18 21:49:12 by sguilher         ###   ########.fr       */
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
	else if ((*f).specifier == CHAR)
		printf_c(p, f, (char)va_arg(args, int));
	else if ((*f).specifier == STRING)
		printf_s(p, f, va_arg(args, char *));
	else if ((*f).specifier == D_INT)
		printf_id(p, f, (long int)va_arg(args, int));
	else if ((*f).specifier ==  INT)
		printf_id(p, f, (long int)va_arg(args, int));
	else if ((*f).specifier == U_INT)
		printf_u(p, f, va_arg(args, unsigned int));
	/*else if ((*f).specifier == 'p')
		printf_p(p, f, va_arg(args, void *));*/
	else if (((*f).specifier == LOWER_HEX) || ((*f).specifier == UPPER_HEX))
		printf_hex(p, f, va_arg(args, unsigned int));
}
