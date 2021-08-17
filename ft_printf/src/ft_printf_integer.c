/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:30 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/17 23:56:42 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printf_number_flags(t_print *p, t_flags *f)//, int *size)
{
	if ((*f).plus == YES)
	{
		printf_putchar_fd(p, '+');
		//size++;
	}
	else if ((*f).space == YES)
	{
		printf_putchar_fd(p, ' ');
		//size++;
	}
}

void	printf_number_width(t_print *p, t_flags *f)//, unsigned int n)
{
	if((*f).zero == YES)
		printf_putchar_fd(p, '0');
	else
		printf_putchar_fd(p, ' ');
}

void	printf_number(t_print *p, long int n)
{
	char	*nchar;

	nchar = printf_itoa(n);
	//write(1, "\nresultado do itoa: ", 21);
	//write(1, nchar, 2);
	//write(1, "\n", 1);
	//printf("n no printf_number = %ld\n", n);
	printf_putstr_fd(p, nchar, strlen(nchar)); // pode ser substituido pelo size
	free(nchar);
}

void	printf_id(t_print *p, t_flags *f, long int n)
{
	//write(1, "\nidentificou o d\n", 18);
	//printf("\nn = %ld", n);
	//if ((*f).minus == YES)
	//{
		if (n < 0)
		{
			printf_putchar_fd(p, '-');
			n *= -1;
			//write(1, "\nidentificou numero negativo\n", 30);
		}
		else
			printf_number_flags(p, f);
		printf_number(p, n);
	//}
}

/*void	printf_u(t_print *p, t_flags *f, unsigned int n)
{
	int				size;
	unsigned int	n;

	n = va_arg(args, unsigned int);
	size = nbsize(n);
	if ((*f).minus == YES)
	{
		printf_number_flags(p, f);
		printf_number(p, f, n);
	}
	while ((*f).width > size)
	{
		printf_putchar_fd(p, ' ');
		(*f).width--;
	}
}*/