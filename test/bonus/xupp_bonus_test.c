/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xupp_bonus_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:50:31 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 06:41:30 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	xupp_bonus_test()
{
	int	result1;
	int	result2;

	// printing unsigned hex integer uppercase - specifier X
	printf(LIGHT_RED("\n\nBonus tests - unsigned hex integer lowercase - specifier X:\n"));
	result1 = printf(LIGHT_BLUE2("%%X = |%X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%X = |%X|\n"), 42427);
	check_return(result1, result2);
	printf("---------------\n");
	printf(PINK("test 1: width\n"));
	result1 = printf(LIGHT_BLUE2("%%10X = |%10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%10X = |%10X|\n"), 42427);
	check_return(result1, result2);
	printf("---------------\n");
	printf(PINK("test 2: left padding\n"));
	result1 = printf(LIGHT_BLUE2("%%-10X = |%-10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-10X = |%-10X|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 3: 0x\n"));
	result1 = printf(LIGHT_BLUE2("%%#10X = |%#10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#10X = |%#10X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%#-10X = |%#-10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#-10X = |%#-10X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-#10X = |%-#10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-#10X = |%-#10X|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 4: 0 padding\n"));
	result1 = printf(LIGHT_BLUE2("%%010X = |%010X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%010X = |%010X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-010X = |%-010X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-010X = |%-010X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-0#10X = |%-0#10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-0#10X = |%-0#10X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%0#10X = |%0#10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%0#10X = |%0#10X|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 5: precision\n"));
	result1 = printf(LIGHT_BLUE2("%%.X = |%.X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.X = |%.X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%.3X = |%.3X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.3X = |%.3X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%.8X = |%.8X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%.8X = |%.8X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%10.5X = |%10.5X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%10.5X = |%10.5X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%-10.5X = |%-10.5X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%-10.5X = |%-10.5X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%%#10.5X = |%#10.5X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%#10.5X = |%#10.5X|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("test 6: invalids flags\n"));
	result1 = printf(LIGHT_BLUE2("%%+10X = |%+10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%%+10X = |%+10X|\n"), 42427);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("%% 10X = |% 10X|\n"), 42427);
	result2 = ft_printf(LIGHT_BLUE2("%% 10X = |% 10X|\n"), 42427);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("\ntest 7: 0\n"));
	result1 = printf("%%X = |%X|\n", 0);
	result2 = ft_printf("%%X = |%X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%5X = |%5X|\n", 0);
	result2 = ft_printf("%%5X = |%5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%05X = |%05X|\n", 0);
	result2 = ft_printf("%%05X = |%05X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%-5X = |%-5X|\n", 0);
	result2 = ft_printf("%%-5X = |%-5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%-05X = |%-05X|\n", 0);
	result2 = ft_printf("%%-05X = |%-05X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%#5X = |%#5X|\n", 0);
	result2 = ft_printf("%%#5X = |%#5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.5X = |%.5X|\n", 0);
	result2 = ft_printf("%%.5X = |%.5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.X = |%.X|\n", 0);
	result2 = ft_printf("%%.X = |%.X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%#.5X = |%#.5X|\n", 0);
	result2 = ft_printf("%%#.5X = |%#.5X|\n", 0);
	check_return(result1, result2);

	printf("---------------\n");
	printf(PINK("\ntest 8: flags variations invalids\n"));
	result1 = printf("%%.#5X = |%.#5X|\n", 0);
	result2 = ft_printf("%%.#5X = |%.#5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.-5X = |%.-5X|\n", 0);
	result2 = ft_printf("%%.-5X = |%.-5X|\n", 0);
	check_return(result1, result2);
	result1 = printf("%%.05X = |%.05X|\n", 0);
	result2 = ft_printf("%%.05X = |%.05X|\n", 0);
	check_return(result1, result2);
}
