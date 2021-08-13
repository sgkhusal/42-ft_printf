/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:01:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/13 21:04:28 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	check_specifier(const char c)
{
	if (ft_strchr(CONVERSIONS, c))
		return (c);
	else
		return (0);
}

//int	print_specifier(t_print *p, t_flags *f, va_list args)
int	print_specifier(t_print *p)
{
	/*if ((*f).specifier == 'c')
		return(print_c(p, f, va_arg(args, char)));
	else if ((*f).specifier == 's')
		return(print_s(p, f, va_arg(args, char *)));
	else if ((*f).specifier == 'd')
		return(print_d(p, f, va_arg(args, int)));
	else if ((*f).specifier == 'i')
		return(print_i(p, f, va_arg(args, int)));
	else if ((*f).specifier == 'u')
		return(print_u(p, f, va_arg(args, unsigned int)));
	else if ((*f).specifier == 'p')
		return(print_p(p, f, va_arg(args, void *)));
	else if ((*f).specifier == 'x')
		return(print_low_hex(p, f, va_arg(args, char *)));
	else if ((*f).specifier == 'X')
		return(print_upp_hex(p, f, va_arg(args, char *)));
	else*/
	(*p).i++;
		return (write((*p).fd, "%", 1));
}
