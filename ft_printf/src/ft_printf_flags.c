/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 03:59:42 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/19 23:18:21 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_printf_atoi(t_print *p, const char *nptr, int *i)
{
	unsigned long long		n;

	n = 0;
	while (ft_isdigit(*nptr))
	{
		n = n * 10 + (*nptr - 48);
		nptr++;
		(*p).i++;
		(*i)++;
	}
	return (n);
}

static void	check_numb_flags(t_flags *f, t_print *p, const char *s, int *i)
{
	if (ft_isdigit(s[0]))
	{
		if ((*f).point == 1)
			(*f).precision = ft_printf_atoi(p, s, i);
		else
			(*f).width = ft_printf_atoi(p, s, i);
	}
}

static void	put_flags(t_flags *f, const char c)
{
	if (c == '-')
		(*f).minus = YES;
	else if (c == '0')
		(*f).zero = YES;
	else if (c == '+')
		(*f).plus = YES;
	else if (c == ' ')
		(*f).space = YES;
	else if (c == '.')
		(*f).point = YES;
	else if (c == '#')
		(*f).hashtag = YES;
}

static void	check_flags(t_flags *f, t_print *p, const char *s, int *i)
{
	int	j;

	j = 0;
	while (ft_strchr(FLAGS, s[j]))
	{
		put_flags(f, s[j]);
		(*p).i++;
		j++;
	}
	check_numb_flags(f, p, &s[j], &j);
	if (s[j] == PRECISION)
	{
		(*f).point = YES;
		(*p).i++;
		j++;
		check_numb_flags(f, p, &s[j], &j);
	}
	(*i) = (*i) + j;
}

void	printf_flags(t_print *p, const char *s, va_list args)
{
	t_flags	f;
	int		i;

	f.specifier = NO;
	f.minus = NO;
	f.zero = NO;
	f.plus = NO;
	f.space = NO;
	f.point = NO;
	f.hashtag = NO;
	f.precision = 0;
	f.width = 0;
	i = 0;
	check_flags(&f, p, &s[i], &i);
	if (check_specifier(&f, p, s[i]) == YES)
		print_specifier(p, &f, args);
	else
	{
		printf_putchar_fd(p, '%');
		(*p).i = (*p).i - i;
	}
}
