/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:00:10 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/13 08:16:25 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
#include <stdio.h> ///////////////////////////////

# define STDOUT	1
# define CONVERSIONS "cspdiuxX%"
# define FLAGS "-0+ #."
# define NO_SPECIFIER 0

typedef struct		s_flags
{
	char			specifier;
	int				minus;
	int				zero;
	int				plus;
	int				space;
	int				hashtag;
	int				point;
	int				width;
	int				precision;
}					t_flags;

typedef struct		s_print
{
	int				i;
	int				j;
	int				len;
	int				sub_len;
	int				fd;
}					t_print;

int	ft_printf(const char *str, ...);
int	ft_printf_fd(int fd, const char *str, ...);
int	printf_flags(t_print *p, const char *str, va_list args);

char	check_specifier(const char c);
int	print_specifier(t_print *p, t_flags *f, va_list args);
int	print_c(t_print *p, t_flags *f, char c);
int	print_s(t_print *p, t_flags *f, char *str);
int	print_d(t_print *p, t_flags *f, int n);
int	print_i(t_print *p, t_flags *f, int n);
int	print_u(t_print *p, t_flags *f, unsigned int n);
int	print_p(t_print *p, t_flags *f, void *);
int	print_low_hex(t_print *p, t_flags *f, char *hex);
int	print_upp_hex(t_print *p, t_flags *f, char *hex);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
int	ft_isdigit(int c);

#endif