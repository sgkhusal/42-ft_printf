/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xlow_bonus_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:50:16 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 19:08:35 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	xlow_bonus_test()
{
	int	result1;
	int	result2;

	// printing unsigned hex integer lowercase - specifier x
	printf(LIGHT_RED("\n\nBonus tests - unsigned hex integer lowercase - specifier x:\n"));
	result1 = printf(LIGHT_BLUE2("%%x = |%x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%x = |%x|\n"), 42427);
	check_return(result1, result2);
	printf("---------------\n");
	printf(PINK("test 1: width\n"));
	result1 = printf(LIGHT_BLUE2("%%10x = |%10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%10x = |%10x|\n"), 42427);
	check_return(result1, result2);
	printf("---------------\n");
	printf(PINK("test 2: left padding\n"));
	result1 = printf(LIGHT_BLUE2("%%-10x = |%-10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-10x = |%-10x|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 3: 0x\n"));
	result1 = printf(LIGHT_BLUE2("%%#10x = |%#10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#10x = |%#10x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%#-10x = |%#-10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#-10x = |%#-10x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-#10x = |%-#10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-#10x = |%-#10x|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 4: 0 padding\n"));
	result1 = printf(LIGHT_BLUE2("%%010x = |%010x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%010x = |%010x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-010x = |%-010x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-010x = |%-010x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-0#10x = |%-0#10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-0#10x = |%-0#10x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%0#10x = |%0#10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%0#10x = |%0#10x|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 5: precision\n"));
	result1 = printf(LIGHT_BLUE2("%%.x = |%.x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.x = |%.x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%.3x = |%.3x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.3x = |%.3x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%.8x = |%.8x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.8x = |%.8x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%10.5x = |%10.5x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%10.5x = |%10.5x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-10.5x = |%-10.5x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-10.5x = |%-10.5x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%#10.5x = |%#10.5x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#10.5x = |%#10.5x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf("%%#.5x = |%#.5x|\n", 42427);
	result2 = ft_printf("%%#.5x = |%#.5x|\n", 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 6: invalids flags\n"));
	result1 = printf(LIGHT_BLUE2("%%+10x = |%+10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%+10x = |%+10x|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%- 10x = |%- 10x|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%- 10x = |%- 10x|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("\ntest 7: 0\n"));
	result1 = printf("%%x = |%x|\n", 0);
	result2 = ft_printf("%%x = |%x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%5x = |%5x|\n", 0);
	result2 = ft_printf("%%5x = |%5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%05x = |%05x|\n", 0);
	result2 = ft_printf("%%05x = |%05x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%-5x = |%-5x|\n", 0);
	result2 = ft_printf("%%-5x = |%-5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%-05x = |%-05x|\n", 0);
	result2 = ft_printf("%%-05x = |%-05x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%#5x = |%#5x|\n", 0);
	result2 = ft_printf("%%#5x = |%#5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.5x = |%.5x|\n", 0);
	result2 = ft_printf("%%.5x = |%.5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.x = |%.x|\n", 0);
	result2 = ft_printf("%%.x = |%.x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%#.5x = |%#.5x|\n", 0);
	result2 = ft_printf("%%#.5x = |%#.5x|\n", 0);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("\ntest 8: flags variations invalids\n"));
	result1 = printf("%%.#5x = |%.#5x|\n", 0);
	result2 = ft_printf("%%.#5x = |%.#5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.-5x = |%.-5x|\n", 0);
	result2 = ft_printf("%%.-5x = |%.-5x|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.05x = |%.05x|\n", 0);
	result2 = ft_printf("%%.05x = |%.05x|\n", 0);
	check_return(result1, result2);
}
