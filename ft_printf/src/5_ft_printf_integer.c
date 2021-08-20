/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_ft_printf_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/21 01:15:11 by sguilher         ###   ########.fr       */
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

static int	printf_size_idu(t_flags *f, unsigned int n)
{
	if ((*f).point == YES && (*f).precision == 0)
		return (0);
	else
		return (printf_nbsize(n));
}

static void	printf_number(t_print *p, t_flags *f, unsigned int n)
{
	char	*nchar;

	if (n == 0)
		printf_zero(p, f);
	else
	{
		nchar = printf_itoa(n);
		printf_putstr_fd(p, nchar, ft_strlen(nchar));
		free(nchar);
	}
}

static void	printf_rjust_idu(t_print *p, t_flags *f, long int n, char sign)
{
	int		size;

	size = printf_size_idu(f, n);
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
		if ((*f).width > size || (*f).width > (*f).precision)
			printf_pad(p, (*f).width, ft_highnb(size, (*f).precision), ' ');
		printf_putcharnb_fd(p, sign);
		printf_pad(p, (*f).precision, size, '0');
		if ((*f).precision != 0)
			printf_number(p, f, n);
	}
}

void	printf_idu(t_print *p, t_flags *f, long int n)
{
	char	sign;
	int		size;

	sign = printf_nbsign(f, &n);
	size = printf_size_idu(f, n);
	if ((*f).minus == YES)
	{
		printf_putcharnb_fd(p, sign);
		printf_pad2(p, f, size, '0');
		if ((*f).point == NO || ((*f).point == YES && (*f).precision != 0))
			printf_number(p, f, n);
		printf_pad(p, (*f).width, size, ' ');
	}
	else
		printf_rjust_idu(p, f, n, sign);
}
