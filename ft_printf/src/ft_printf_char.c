/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:09:22 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/16 04:02:25 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printf_char(t_print *p, char c)
{
	write((*p).fd, &c, 1);
	(*p).len++;
}

void	printf_c(t_print *p, t_flags *f, char c)
{
	if ((*f).minus == 1)
		printf_char(p, c);
	while ((*f).width > 1)
	{
		write((*p).fd, " ", 1); // pode substituir por printf_char(p, ' ');
		(*p).len++;
		(*f).width--;
	}
	if ((*f).minus == 0)
		printf_char(p, c);
}

void	printf_s(t_print *p, t_flags *f, char *s)
{
	size_t	len;

	len = ft_strlen(s);
	while((*f).width > len)
	{
		write((*p).fd, " ", 1); // pode substituir por printf_char(p, ' ');
		(*p).len++;
		(*f).width--;
	}
	write((*p).fd, s, len);
	(*p).len += len;
}