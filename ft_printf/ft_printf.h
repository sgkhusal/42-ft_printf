/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:00:10 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/17 19:45:19 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
#include <stdio.h> ///////////////////////////////

# define STDOUT	1
# define CONVERSIONS "%cspdiuxX"
# define FLAGS "-0+ #"
# define PRECISION 46
# define NO_SPECIFIER 0
# define HAVE_SPECIFIER 1

typedef struct		s_flags
{
	char			specifier;
	int				minus;
	int				zero;
	int				plus;
	int				space;
	int				hashtag;
	int				point;
	size_t			width;
	size_t			precision;
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
void	printf_flags(t_print *p, const char *str, va_list args);

int	check_specifier(t_flags *f, t_print *p, const char c);
void	print_specifier(t_print *p, t_flags *f, va_list args);
void	printf_char(t_print *p, char c);
void	printf_c(t_print *p, t_flags *f, char c);
void	printf_s(t_print *p, t_flags *f, char *str);
void	printf_d(t_print *p, t_flags *f, int n);
void	printf_i(t_print *p, t_flags *f, int n);
void	printf_u(t_print *p, t_flags *f, unsigned int n);
void	printf_p(t_print *p, t_flags *f, void *);
void	printf_low_hex(t_print *p, t_flags *f, char *hex);
void	printf_upp_hex(t_print *p, t_flags *f, char *hex);

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
int	ft_isdigit(int c);

#endif