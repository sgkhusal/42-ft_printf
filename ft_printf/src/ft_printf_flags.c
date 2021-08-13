/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_flags.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 03:59:42 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/13 19:15:00 by sguilher         ###   ########.fr       */
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
	if (ft_isdigit(str[*i]))
	{
		if ((*f).point == 1)
			(*f).precision = ft_printf_atoi(p, &str[*i], i);
		else
			(*f).width = ft_printf_atoi(p, &str[*i], i);
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
		(*i)++;
		j++;
	}
	check_numb_flags(f, p, &str[j], i);
}

int	printf_flags(t_print *p, const char *str, va_list args)
{
	t_flags	f;
	int		i;

	i = 0;
	f.minus = 0;
	f.zero = 0;
	f.plus = 0;
	f.space = 0;
	f.point = 0;
	f.hashtag = 0;
	check_flags(&f, p, &str[i], &i);
	check_flags(&f, p, &str[i], &i);
	f.specifier = check_specifier(str[i]);
	if (f.specifier)
		return (print_specifier(p, &f, args));
	else
		return(write((*p).fd, "%", 1));
	///// verificar se a printf nao imprime as flags no caso de nao ter um specifier!!!!
	// se for o caso, precisa colocar uma funcao para voltar e imprimir na ordem correta!!
}
