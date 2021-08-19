/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:26 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/19 02:21:34 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	printf_hash(t_print *p, t_flags *f)
{
	if ((*f).hashtag == YES)
	{
		if ((*f).specifier == LOWX)
			printf_putstr_fd(p, "0x", 2);
		else if ((*f).specifier == UPPX)
			printf_putstr_fd(p, "0X", 2);
	}
}

void	ft_toupper_str(char *s)
{
	while (*s)
	{
		*s = ft_toupper(*s);
		s++;
	}
}

void	printf_hex(t_print *p, t_flags *f, unsigned int n)
{
	char *hex;

	if (n == 0)
		printf_putchar_fd(p, '0');
	else
	{
		hex = printf_itohex(n);
		if (hex)
		{
			printf_hash(p, f);
			if ((*f).specifier == UPPX)
				ft_toupper_str(hex);
			printf_putstr_fd(p, hex, ft_strlen(hex));
			free(hex);
		}
	}
}

//void	printf_ptr(t_print *p, t_flags *f, unsigned long int n)
void	printf_ptr(t_print *p, unsigned long int n)
{
	char	*hex;

	if (n == 0)
		printf_putstr_fd(p, "0x0", 3);
	else
	{
		hex = printf_itohex(n);
		if (hex)
		{
			//printf("pointer = %s", hex);
			printf_putstr_fd(p, "0x", 2);
			printf_putstr_fd(p, hex, (int)ft_strlen(hex));
			free(hex);
		}
	}
}
