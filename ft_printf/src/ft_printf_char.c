/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:22 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/19 21:03:44 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printf_putchar_fd(t_print *p, char c)
{
	write((*p).fd, &c, 1);
	(*p).len++;
}

void	printf_putcharnb_fd(t_print *p, char c)
{
	if (c)
	{
		write((*p).fd, &c, 1);
		(*p).len++;
	}
}

void	printf_putstr_fd(t_print *p, const char *s, int size)
{
	if (s)
		(*p).len = (*p).len + write((*p).fd, s, size);
}

void	printf_c(t_print *p, t_flags *f, char c)
{
	if ((*f).minus == YES)
		printf_putchar_fd(p, c);
	while ((*f).width > 1)
	{
		printf_putchar_fd(p, ' ');
		(*f).width--;
	}
	if ((*f).minus == 0)
		printf_putchar_fd(p, c);
}

void	printf_s(t_print *p, t_flags *f, char *s)
{
	int	len;

	len = (int)ft_strlen(s);
	/*if ((*f).point == YES)
	{
		if ((*f).precision) > len)
		{

		}
	}*/
	while((*f).width > len)
	{
		printf_putchar_fd(p, ' ');
		(*f).width--;
	}
	write((*p).fd, s, len);
	(*p).len += len;
}