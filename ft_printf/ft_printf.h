/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 22:00:10 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 05:25:43 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
#include <stdio.h> ///////////////////////////////

# define STDOUT	1
# define CONVERSIONS "%cspdiuxX"
# define FLAGS "-0+ #"
# define PRECISION '.'
# define NO 0
# define YES 1
# define LOWX 'x'
# define UPPX 'X'

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
	int				len;
	int				sub_len;
	int				fd;
}					t_print;

/*
ft_printf functions
*/

int		ft_printf(const char *str, ...);
int		ft_printf_fd(int fd, const char *str, ...);
void	printf_flags(t_print *p, const char *str, va_list args);
int		check_specifier(t_flags *f, t_print *p, const char c);
void	print_specifier(t_print *p, t_flags *f, va_list args);
void	printf_c(t_print *p, t_flags *f, char c);
void	printf_s(t_print *p, t_flags *f, char *str);
void	printf_idu(t_print *p, t_flags *f, long int n);
//void	printf_ptr(t_print *p, t_flags *f, unsigned long int n);
void	printf_ptr(t_print *p, unsigned long int n);
void	printf_hex(t_print *p, t_flags *f, unsigned int n);

void	printf_putstr_fd(t_print *p, const char *s, int size);
void	printf_putchar_fd(t_print *p, char c);
void	printf_putcharnb_fd(t_print *p, char c);
void	printf_pad(t_print *p, int var, int ref, char c);

int		printf_nbsize(unsigned int n);
char	*printf_itoa(unsigned int n);
char	*printf_itohex(unsigned long int n);

/*
libft
*/

char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);
int		ft_isdigit(int c);
int		ft_toupper(int c);

#endif