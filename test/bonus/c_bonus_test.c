/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_bonus_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:13:21 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 05:42:02 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	c_bonus_test()
{
	int	result1;
	int	result2;

	char	c = 'a';
	printf(LIGHT_RED("\nprinting char with Flags - specifier c:\n"));
	result1 = printf("%%c = |%c|\n", c);
	result2 = ft_printf("%%c = |%c|\n", c);
	check_return(result1, result2);
	printf("---------------\n");
	printf(LIGHT_BLUE2("test 1: width\n"));
	result1 = printf("%%5c = |%5c|\n", c);
	result2 = ft_printf("%%5c = |%5c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 2: left padding\n"));
	result1 = printf("%%-5c = |%-5c|\n", c);
	result2 = ft_printf("%%-5c = |%-5c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 3: flags\n"));
	result1 = printf("%%05c = |%05c|\n", c); // undefined behavior
	result2 = ft_printf("%%05c = |%05c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%+5c = |%+5c|\n", c); // undefined behavior
	result2 = ft_printf("%%+5c = |%+5c|\n", c);
	check_return(result1, result2);
	result1 = printf("%% 5c = |% 5c|\n", c); // undefined behavior
	result2 = ft_printf("%% 5c = |% 5c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%#5c = |%#5c|\n", c); // undefined behavior
	result2 = ft_printf("%%#5c = |%#5c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%5.c = |%5.c|\n", c);
	result2 = ft_printf("%%5.c = |%5.c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%.5c = |%.5c|\n", c); // undefined behavior
	result2 = ft_printf("%%.5c = |%.5c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 4:\n"));
	result1 = printf("%%5-c = |%5-c|\n", c); // - vem sempre antes do width
	result2 = ft_printf("%%5-c = |%5-c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%5+c = |%5+c|\n", c); // + vem sempre antes do width
	result2 = ft_printf("%%5+c = |%5+c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%5 c = |%5 c|\n", c); // ' ' vem sempre antes do width
	result2 = ft_printf("%%5 c = |%5 c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%5#c = |%5#c|\n", c); // # vem sempre antes do width
	result2 = ft_printf("%%5#c = |%5#c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 5:\n"));
	result1 = printf("%%-010.3c = |%-010.3c|\n", c); // # vem sempre antes do width
	result2 = ft_printf("%%-010.3c = |%-010.3c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%0-10.c = |%0-10.c|\n", c); // # vem sempre antes do width
	result2 = ft_printf("%%0-10.c = |%0-10.c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%.-05c = |%.-05c|\n", c); // '-' invalid conversion specifier - undefined behavior
	result2 = ft_printf("%%.-05c = |%.-05c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%-0.5c = |%-0.5c|\n", c); // undefined behavior
	result2 = ft_printf("%%-0.5c = |%-0.5c|\n", c);
	check_return(result1, result2);
}