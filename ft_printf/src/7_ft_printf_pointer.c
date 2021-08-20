/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:38:59 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 19:39:28 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
			printf_putstr_fd(p, "0x", 2);
			printf_putstr_fd(p, hex, (int)ft_strlen(hex));
			free(hex);
		}
	}
}
