/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 21:59:48 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/13 05:27:43 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	printf_fd(int fd, const char *str, va_list args)
{
	t_print		p;

	p.len = 0;
	p.sub_len = 0;
	p.i = 0;
	p.j = 0;
	p.fd = fd;
	while (str[p.i])
	{
		p.sub_len++;
		//printf("p.sub_len = %d and str[%d] = %c\n", p.sub_len, p.i, str[p.i]);
		if(str[p.i] == '%')
		{
			p.len = p.len + write(fd, &str[p.j], p.sub_len - 1);
			//printf("p.len = %d\n", p.len);
			p.len = p.len + printf_flags(&p, &str[++p.i], args);//, &p.i); //so precisa do p.i no bonus
			// preciso de um retorno de quantos andou no p.i - bonus
			p.j = p.i; // nova posicao que deve continuar a impressao
			p.sub_len = 0;
			printf("p.len = %d\n", p.len);
		}
		p.i++;
	}
	write(1, &str[p.j], p.sub_len);
	p.len = p.len + p.sub_len;
	return (p.len);
}

int	ft_printf_fd(int fd, const char *str, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, str);
	len = printf_fd(fd, str, ap);
	va_end(ap);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	va_start(ap, str);
	len = printf_fd(STDOUT, str, ap);
	va_end(ap);
	return (len);
}