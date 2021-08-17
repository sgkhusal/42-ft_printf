/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 03:59:42 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/17 19:45:21 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_printf_atoi(t_print *p, const char *nptr, int *i)
{
	unsigned long long		n;
	int						j;

	j = 0;
	n = 0;
	while (ft_isdigit(nptr[j]))
	{
		n = n * 10 + (nptr[j] - 48);
		j++;
		(*p).i++;
		(*i)++;
	}
	return (n);
}

static void	check_numb_flags(t_flags *f, t_print *p, const char *str, int *i)
{
	if (ft_isdigit(str[0]))
	{
		if ((*f).point == 1)
			(*f).precision = ft_printf_atoi(p, str, i);
		else
			(*f).width = ft_printf_atoi(p, str, i);
	}
}

static void	put_flags(t_flags *f, const char c)
{
	if (c == '-')
		(*f).minus = 1;
	else if (c == '0')
		(*f).zero = 1;
	else if (c == '+')
		(*f).plus = 1;
	else if (c == ' ')
		(*f).space = 1;
	else if (c == '.')
		(*f).point = 1;
	else if (c == '#')
		(*f).hashtag = 1;
}

static void	check_flags(t_flags *f, t_print *p, const char *str, int *i)
{
	int	j;

	j = 0;
	while (ft_strchr(FLAGS, str[j]))
	{
		put_flags(f, str[j]);
		(*p).i++;
		j++;
	}
	check_numb_flags(f, p, &str[j], &j);
	if (str[j] == PRECISION)
	{
		(*f).point = 1;
		(*p).i++;
		j++;
		check_numb_flags(f, p, &str[j], &j);
	}
	(*i) = (*i) + j;
}

void	printf_flags(t_print *p, const char *str, va_list args)
{
	t_flags	f;
	int		i;

	f.specifier = 0;
	f.minus = 0;
	f.zero = 0;
	f.plus = 0;
	f.space = 0;
	f.point = 0;
	f.hashtag = 0;
	f.precision = 1;
	f.width = 0;
	/*if (check_specifier(&f, p, str[0]) == 1) // pode tirar o if e deixar so o else
		print_specifier(p, &f, args);
	else
	{*/
		i = 0;
		check_flags(&f, p, &str[i], &i);
		if (check_specifier(&f, p, str[i]) == HAVE_SPECIFIER)
			print_specifier(p, &f, args);
		else
		{
			printf_char(p, '%');
			(*p).i = (*p).i - i;
		}
	/*}*/
}
