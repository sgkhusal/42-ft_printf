/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/18 21:16:39 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printf_number_flags(t_print *p, t_flags *f)
{
	if ((*f).plus == YES)
	{
		printf_putchar_fd(p, '+');
		(*f).width--;
	}
	else if ((*f).space == YES)
	{
		printf_putchar_fd(p, ' ');
		(*f).width--;
	}
}

void	printf_number_width(t_print *p, t_flags *f)
{
	if((*f).minus == NO)
	{
		if ((*f).zero == YES)
			printf_putchar_fd(p, '0');
		else
			printf_putchar_fd(p, ' ');
	}
	else
		printf_putchar_fd(p, ' ');
}

void	printf_number(t_print *p, unsigned int n)
{
	char	*nchar;

	if (n == 0)
		printf_putchar_fd(p, '0');
	else
	{
		nchar = printf_itoa(n);
		printf_putstr_fd(p, nchar, ft_strlen(nchar));// pode ser substituido pelo nbsize
		free(nchar);
	}
}

void	printf_idnumber(t_print *p, t_flags *f, long int n)
{
	if (n < 0)
	{
		printf_putchar_fd(p, '-');
		n *= -1;
	}
	else
		printf_number_flags(p, f);
	printf_number(p, n);
}

void	printf_id(t_print *p, t_flags *f, long int n)
{
	int	size;

	size = printf_nbsize(n) + printf_nbflags_size(n, f);
	//printf("\nwidth = %i\n", (*f).width);
	if ((*f).minus == YES)
	{
		printf_idnumber(p, f, n);
		(*f).width -= size;
		while ((*f).width > 0)
		{
			printf_number_width(p, f);
			(*f).width--;
		}
	}
	else
	{
		while ((*f).width > size)
		{
			printf_number_width(p, f);
			(*f).width--;
		}
		printf_idnumber(p, f, n);
	}
}

void	printf_u(t_print *p, t_flags *f, unsigned int n)
{
	int	size;

	size = printf_nbsize(n) + printf_nbflags_size(n, f);
	if ((*f).minus == YES)
	{
		printf_number_flags(p, f);
		printf_number(p, n);
		(*f).width -= size;
		while ((*f).width > 0)
		{
			printf_number_width(p, f);
			(*f).width--;
		}
	}
	else
	{
		while ((*f).width > size)
		{
			printf_number_width(p, f);
			(*f).width--;
		}
		printf_number_flags(p, f);
		printf_number(p, n);
	}
}