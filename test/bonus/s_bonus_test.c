/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_bonus_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:49:47 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 05:37:42 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

s_bonus_test()
{
	char	str[13] = "Hello World!";
	int	result1;
	int	result2;

	// printing string - specifier s
	printf(LIGHT_RED("\nBonus tests - string - specifier s:\n"));
	result1 = printf("string %%s = |%s|\n", str);
	result2 = ft_printf("string %%s = |%s|\n", str);
	check_return(result1, result2);
	printf("-----------------------------------------------\n");
	printf(PINK("\ntest 1 - simple flags:\n"));
	result1 = printf("string %%5s = |%5s|\n", str);
	result2 = ft_printf("string %%5s = |%5s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%20s = |%20s|\n", str);
	result2 = ft_printf("string %%20s = |%20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%-20s = |%-20s|\n", str);
	result2 = ft_printf("string %%-20s = |%-20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%+20s = |%+20s|\n", str);
	result2 = ft_printf("string %%+20s = |%+20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %% 20s = |% 20s|\n", str);
	result2 = ft_printf("string %% 20s = |% 20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%#20s = |%#20s|\n", str);
	result2 = ft_printf("string %%#20s = |%#20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%020s = |%020s|\n", str);
	result2 = ft_printf("string %%020s = |%020s|\n", str);
	check_return(result1, result2);
	printf("-----------------------------------------------\n");
	printf(PINK("\ntest 2:\n"));
	result1 = printf("string %%-020s = |%-020s|\n", str);
	result2 = ft_printf("string %%-020s = |%-020s|\n", str);
	check_return(result1, result2);

	printf("-----------------------------------------------\n");
	printf(PINK("\nprecision flag 2:\n"));
	printf(PINK("test 3.1:\n"));
	result1 = printf("string %%.5s = |%.5s|\n", str);
	result2 = ft_printf("string %%.5s = |%.5s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%.s = |%.s|\n", str);
	result2 = ft_printf("string %%.s = |%.s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%.20s = |%.20s|\n", str);
	result2 = ft_printf("string %%.20s = |%.20s|\n", str);
	check_return(result1, result2);
	printf("-----------------------------------------------\n");
	printf(PINK("test 3.2:\n"));
	result1 = printf("string %%20.5s = |%20.5s|\n", str);
	result2 = ft_printf("string %%20.5s = |%20.5s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%-20.5s = |%-20.5s|\n", str);
	result2 = ft_printf("string %%-20.5s = |%-20.5s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%5.10s = |%5.10s|\n", str);
	result2 = ft_printf("string %%5.10s = |%5.10s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%10.5s = |%10.5s|\n", str);
	result2 = ft_printf("string %%10.5s = |%10.5s|\n", str);
	check_return(result1, result2);
	printf("-----------------------------------------------\n");
	printf(PINK("test 3.3:\n"));
	result1 = printf("string %%-.20s = |%-.20s|\n", str);
	result2 = ft_printf("string %%-.20s = |%-.20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%20-.5s = |%20-.5s|\n", str);
	result2 = ft_printf("string %%20-.5s = |%20-.5s|\n", str);
	check_return(result1, result2);

	printf("-----------------------------------------------\n");
	printf(PINK("\ntest 4:\n"));
	result1 = printf("string %%.-20s = |%.-20s|\n", str);
	result2 = ft_printf("string %%.-20s = |%.-20s|\n", str);
	check_return(result1, result2);
	result1 = printf("string %%20.-s = |%20.-s|\n", str);
	result2 = ft_printf("string %%20.-s = |%20.-s|\n", str);
	check_return(result1, result2);

	printf("-----------------------------------------------\n");
	printf(PINK("\ntest 5:printing an empty string:\n"));
	result1 = printf("string %%5s = |%5s|\n", "");
	result2 = ft_printf("string %%5s = |%5s|\n", "");
	check_return(result1, result2);
	result1 = printf("string %%.5s = |%.5s|\n", "");
	result2 = ft_printf("string %%.5s = |%.5s|\n", "");
	check_return(result1, result2);
	result1 = printf("string %%10.5s = |%10.5s|\n", "");
	result2 = ft_printf("string %%10.5s = |%10.5s|\n", "");
	check_return(result1, result2);
	result1 = printf("string %%5.10s = |%5.10s|\n", "");
	result2 = ft_printf("string %%5.10s = |%5.10s|\n", "");
	check_return(result1, result2);
}
