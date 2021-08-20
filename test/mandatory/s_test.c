/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_test.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:37:53 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 04:39:19 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	s_test()
{
	char	str[13] = "Hello World!";
	int	result1;
	int	result2;

	// printing string - specifier s
	printf(LIGHT_RED("\nprinting string - specifier s:\n"));
	result1 = printf(LIGHT_BLUE2("string %%s = |%s|\n"), str);
	result2 = ft_printf(LIGHT_BLUE2("string %%s = |%s|\n"), str);
	check_return(result1, result2);
	printf(PINK("\nprinting an empty string:\n"));
	result1 = printf(LIGHT_BLUE2("string %%s = |%s|\n"), "");
	result2 = ft_printf(LIGHT_BLUE2("string %%s = |%s|\n"), "");
	check_return(result1, result2);
	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("|%s| |%s|\n"), str, "Welcome to 42!");
	result2 = ft_printf(LIGHT_BLUE2("|%s| |%s|\n"), str, "Welcome to 42!");
	check_return(result1, result2);
}
