/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itohex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:53:38 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/18 22:58:42 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	itohex_conversion(int n, char x)
{
	if (n < 10)
		return (n + '0');
	else if (x == LOWER_HEX)
		return ((n - 10) + 'a');
	else if (x == UPPER_HEX)
		return ((n - 10) + 'A');
	else
		return (0);
}

void	printf_strtranslate(char *s, int idcopy)
{
	int	i;

	i = 0;
	while (s[idcopy])
	{
		s[i] = s[idcopy];
		i++;
		idcopy++;
	}
	s[i] = s[idcopy];
}

char	*printf_itohex(unsigned int n, char hconversion)
{
	char	*hexnb;
	int		size;

	size = printf_nbsize(n);
	hexnb = NULL;
	if (size > 0)
		hexnb = (char *)malloc((size + 1) * sizeof(char));
	if (!(hexnb))
		return (NULL);
	else
	{
		hexnb[size] = '\0';
		while (--size >= 0 && n >= 16)
		{
			hexnb[size] = itohex_conversion(n % 16, hconversion);
			n = n / 16;
			//printf("printf_itohex - n = %u\n", n);
			//printf("\nprintf_itohex - size = %i\n", size);
		}
		hexnb[size] = itohex_conversion(n % 16, hconversion);
		if (size > 0)
			printf_strtranslate(hexnb, size);
		//printf("printf_itohex - hexnb = %s\n", hexnb);
		return (hexnb);
	}
}
