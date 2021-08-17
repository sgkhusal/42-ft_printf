/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:53:38 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/17 23:56:54 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	printf_nbsize(unsigned int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*printf_itoa(unsigned int n)
{
	char	*charnb;
	int		size;

	size = printf_nbsize(n);
	//printf("size = %i\n", size);
	charnb = NULL;
	if (size > 0)
		charnb = (char *)malloc((size + 1) * sizeof(char));
	if (!(charnb))
		return (NULL);
	else
	{
		charnb[size] = '\0';
		//printf("charnb[%i] = %i\n", size, charnb[size]);
		while (--size >= 0)
		{
			charnb[size] = (n % 10) + '0';
			//printf("charnb[%i] = %c\n", size, charnb[size]);
			n = n / 10;
			//printf("n = %u\n", n);
		}
		//printf("charnb = %s\n", charnb);
		return (charnb);
	}
}
