/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 05:29:05 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	printf_nbsign(t_flags *f, long int *n)
{
	if ((*f).specifier == 'i' || (*f).specifier == 'd')
	{
		if (*n < 0)
		{
			*n *= -1;
			(*f).width--;
			return ('-');
		}
		else if ((*f).plus == YES)
		{
			(*f).width--;
			return ('+');
		}

		else if ((*f).space == YES)
		{
			(*f).width--;
			return (' ');
		}
		else
			return (0);
	}
	else
		return (0);
}

void	printf_pad(t_print *p, int var, int ref, char c)
{
	while (var > ref)
	{
		printf_putchar_fd(p, c);
		var--;
	}
}

static void	printf_number(t_print *p, t_flags *f, unsigned int n)
{
	char	*nchar;

	if (n == 0)
	{
		if ((*f).point == 0 || (*f).precision != 0)
			printf_putchar_fd(p, '0');
	}
	else
	{
		nchar = printf_itoa(n);
		printf_putstr_fd(p, nchar, ft_strlen(nchar));// pode ser substituido pelo nbsize
		free(nchar);
	}
}

static void	printf_rjust(t_print *p, t_flags *f, long int n, char sign)
{
	int		size;

	size = printf_nbsize(n);
	if ((*f).point == NO)
	{
		if ((*f).zero == YES)
		{
			printf_putcharnb_fd(p, sign);
			printf_pad(p, (*f).width, size, '0');
		}
		else
		{
			printf_pad(p, (*f).width, size, ' ');
			printf_putcharnb_fd(p, sign);
		}
		printf_number(p, f, n);
	}
	else
	{
		if ((*f).width > size)
			printf_pad(p, (*f).width, (*f).precision, ' ');
		printf_putcharnb_fd(p, sign);
		printf_pad(p, (*f).precision, size, '0');
		printf_number(p, f, n);
	}
}

void	printf_idu(t_print *p, t_flags *f, long int n)
{
	char	sign;
	int		size;

	sign = printf_nbsign(f, &n);
	size = printf_nbsize(n);
	if ((*f).minus == YES)
	{
		printf_putcharnb_fd(p, sign);
		while ((*f).precision > size)
		{
			printf_putchar_fd(p, '0');
			(*f).precision--;
			(*f).width--;
		}
		printf_number(p, f, n);
		(*f).width -= size;
		printf_pad(p, (*f).width, 0, ' ');
	}
	else
		printf_rjust(p, f, n, sign);
}
