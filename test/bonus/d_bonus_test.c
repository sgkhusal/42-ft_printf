/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_bonus_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:17:43 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 04:30:00 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	d_bonus_test()
{
	int	result1;
	int	result2;

	printf(PINK("\nprinting integer with Flags:\n"));
	printf(PINK("\nSpecifier d:\n"));
	printf(LIGHT_BLUE2("test 1:\n"));
	result1 = printf("%10s = |%5d|\n", "%5d", -42);
	result2 = ft_printf("%10s = |%5d|\n", "%5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5d|\n", "%5d", 42);
	result2 = ft_printf("%10s = |%5d|\n", "%5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 2:\n"));
	result1 = printf("%10s = |%-5d|\n", "%-5d", -42);
	result2 = ft_printf("%10s = |%-5d|\n", "%-5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5d|\n", "%-5d", 42);
	result2 = ft_printf("%10s = |%-5d|\n", "%-5d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05d|\n", "%05d", -42);
	result2 = ft_printf("%10s = |%05d|\n", "%05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05d|\n", "%05d", 42);
	result2 = ft_printf("%10s = |%05d|\n", "%05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5d|\n", "%+5d", -42);
	result2 = ft_printf("%10s = |%+5d|\n", "%+5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5d|\n", "%+5d", 42);
	result2 = ft_printf("%10s = |%+5d|\n", "%+5d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5d|\n", "% 5d", -42);
	result2 = ft_printf("%10s = |% 5d|\n", "% 5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5d|\n", "% 5d", 42);
	result2 = ft_printf("%10s = |% 5d|\n", "% 5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 3:\n"));
	result1 = printf("%10s = |%-05d|\n", "%-05d", -42);
	result2 = ft_printf("%10s = |%-05d|\n", "%-05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-05d|\n", "%-05d", 42);
	result2 = ft_printf("%10s = |%-05d|\n", "%-05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0-5d|\n", "%0-5d", -42);
	result2 = ft_printf("%10s = |%0-5d|\n", "%0-5d", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%5-0d|\n", "%5-0d", -42);
	result2 = ft_printf("%10s = |%5-0d|\n", "%5-0d", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+05d|\n", "%+05d", -42);
	result2 = ft_printf("%10s = |%+05d|\n", "%+05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+05d|\n", "%+05d", 42);
	result2 = ft_printf("%10s = |%+05d|\n", "%+05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5d|\n", "%0+5d", -42);
	result2 = ft_printf("%10s = |%0+5d|\n", "%0+5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5d|\n", "%0+5d", 42);
	result2 = ft_printf("%10s = |%0+5d|\n", "%0+5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |% 05d|\n", "% 05d", -42);
	result2 = ft_printf("%10s = |% 05d|\n", "% 05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 05d|\n", "% 05d", 42);
	result2 = ft_printf("%10s = |% 05d|\n", "% 05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5d|\n", "%0 5d", -42);
	result2 = ft_printf("%10s = |%0 5d|\n", "%0 5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5d|\n", "%0 5d", 42);
	result2 = ft_printf("%10s = |%0 5d|\n", "%0 5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%-+05d|\n", "%-+05d", -42);
	result2 = ft_printf("%10s = |%-+05d|\n", "%-+05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-+05d|\n", "%-+05d", 42);
	result2 = ft_printf("%10s = |%-+05d|\n", "%-+05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05d|\n", "%+-05d", -42);
	result2 = ft_printf("%10s = |%+-05d|\n", "%+-05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05d|\n", "%+-05d", 42);
	result2 = ft_printf("%10s = |%+-05d|\n", "%+-05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5d|\n", "%0+-5d", -42);
	result2 = ft_printf("%10s = |%0+-5d|\n", "%0+-5d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5d|\n", "%0+-5d", 42);
	result2 = ft_printf("%10s = |%0+-5d|\n", "%0+-5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%- 05d|\n", "%- 05d", -42);
	result2 = ft_printf("%10s = |%- 05d|\n", "%- 05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%- 05d|\n", "%- 05d", 42);
	result2 = ft_printf("%10s = |%- 05d|\n", "%- 05d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 4:\n"));
	result1 = printf("%10s = |%5.3d|\n", "%5.3d", -42);
	result2 = ft_printf("%10s = |%5.3d|\n", "%5.3d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4i|\n", "%5.4i", -42);
	result2 = ft_printf("%10s = |%5.4i|\n", "%5.4i", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4i|\n", "%5.4i", 42);
	result2 = ft_printf("%10s = |%5.4i|\n", "%5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5.4i|\n", "%+5.4i", 42);
	result2 = ft_printf("%10s = |%+5.4i|\n", "%+5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5.4i|\n", "% 5.4i", 42);
	result2 = ft_printf("%10s = |% 5.4i|\n", "% 5.4i", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.4i|\n", "%-5.4i", 42);
	result2 = ft_printf("%10s = |%-5.4i|\n", "%-5.4i", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%#5d|\n", "%#5d", 42);
	result2 = ft_printf("%10s = |%#5d|\n", "%#5d", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+ 05d|\n", "%+ 05d", -42);
	result2 = ft_printf("%10s = |%+ 05d|\n", "%+ 05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+ 05d|\n", "%+ 05d", 42);
	result2 = ft_printf("%10s = |%+ 05d|\n", "%+ 05d", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05d|\n", "% +05d", -42);
	result2 = ft_printf("%10s = |% +05d|\n", "% +05d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05d|\n", "% +05d", 42);
	result2 = ft_printf("%10s = |% +05d|\n", "% +05d", 42);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.3d|\n", "%05.3d", -42);
	result2 = ft_printf("%10s = |%05.3d|\n", "%05.3d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05d|\n", "%05d", -42);
	result2 = ft_printf("%10s = |%05d|\n", "%05d", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.-d|\n", "%05.-d", -42);
	result2 = ft_printf("%10s = |%05.-d|\n", "%05.-d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05. d|\n", "%05. d", -42);
	result2 = ft_printf("%10s = |%05. d|\n", "%05. d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3d|\n", "%-5.3d", -42);
	result2 = ft_printf("%10s = |%-5.3d|\n", "%-5.3d", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.8d|\n", "%5.8d", -42);
	result2 = ft_printf("%10s = |%5.8d|\n", "%5.8d", -42);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6: number = 0\n"));
	result1 = printf("%10s = |%05.d|\n", "%05.d", 0);
	result2 = ft_printf("%10s = |%05.d|\n", "%05.d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05.3d|\n", "%05.3d", 0);
	result2 = ft_printf("%10s = |%05.3d|\n", "%05.3d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05d|\n", "%05d", 0);
	result2 = ft_printf("%10s = |%05d|\n", "%05d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%5d|\n", "%5d", 0);
	result2 = ft_printf("%10s = |%5d|\n", "%5d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5d|\n", "%-5d", 0);
	result2 = ft_printf("%10s = |%-5d|\n", "%-5d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3d|\n", "%-5.3d", 0);
	result2 = ft_printf("%10s = |%-5.3d|\n", "%-5.3d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-5.2d|\n", "%+-5.2d", 0);
	result2 = ft_printf("%10s = |%+-5.2d|\n", "%+-5.2d", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |% -5.2d|\n", "% -5.2d", 0);
	result2 = ft_printf("%10s = |% -5.2d|\n", "% -5.2d", 0);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 7:\n"));
	result1 = printf("%%10d = |%10d|\n", 1000000);
	result2 = ft_printf("%%10d = |%10d|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%010d = |%010d|\n", 1000000);
	result2 = ft_printf("%%010d = |%010d|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%-010d = |%-010d|\n", 1000000);
	result2 = ft_printf("%%-010d = |%-010d|\n", 1000000);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6:\n"));
	result1 = printf("%%5.3d = |%5.3d|\n", 1000000);
	result2 = ft_printf("%%5.3d = |%5.3d|\n", 1000000);
	check_return(result1, result2);

}