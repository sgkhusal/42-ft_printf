/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_bonus_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 04:24:22 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/20 04:33:28 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../utils/test.h"

void	u_bonus_test()
{
	int	result1;
	int	result2;

	printf(PINK("\nprinting unsigned integer with Flags:\n"));
	printf(PINK("\nSpecifier u:\n"));
	printf(LIGHT_BLUE2("test 1:\n"));
	result1 = printf("%10s = |%5u|\n", "%5u", -42);
	result2 = ft_printf("%10s = |%5u|\n", "%5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5u|\n", "%5u", 42);
	result2 = ft_printf("%10s = |%5u|\n", "%5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 2:\n"));
	result1 = printf("%10s = |%-5u|\n", "%-5u", -42);
	result2 = ft_printf("%10s = |%-5u|\n", "%-5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5u|\n", "%-5u", 42);
	result2 = ft_printf("%10s = |%-5u|\n", "%-5u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05u|\n", "%05u", -42);
	result2 = ft_printf("%10s = |%05u|\n", "%05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05u|\n", "%05u", 42);
	result2 = ft_printf("%10s = |%05u|\n", "%05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5u|\n", "%+5u", -42);
	result2 = ft_printf("%10s = |%+5u|\n", "%+5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5u|\n", "%+5u", 42);
	result2 = ft_printf("%10s = |%+5u|\n", "%+5u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5u|\n", "% 5u", -42);
	result2 = ft_printf("%10s = |% 5u|\n", "% 5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5u|\n", "% 5u", 42);
	result2 = ft_printf("%10s = |% 5u|\n", "% 5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 3:\n"));
	result1 = printf("%10s = |%-05u|\n", "%-05u", -42);
	result2 = ft_printf("%10s = |%-05u|\n", "%-05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-05u|\n", "%-05u", 42);
	result2 = ft_printf("%10s = |%-05u|\n", "%-05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0-5u|\n", "%0-5u", -42);
	result2 = ft_printf("%10s = |%0-5u|\n", "%0-5u", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%5-0u|\n", "%5-0u", -42);
	result2 = ft_printf("%10s = |%5-0u|\n", "%5-0u", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+05u|\n", "%+05u", -42);
	result2 = ft_printf("%10s = |%+05u|\n", "%+05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+05u|\n", "%+05u", 42);
	result2 = ft_printf("%10s = |%+05u|\n", "%+05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5u|\n", "%0+5u", -42);
	result2 = ft_printf("%10s = |%0+5u|\n", "%0+5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+5u|\n", "%0+5u", 42);
	result2 = ft_printf("%10s = |%0+5u|\n", "%0+5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |% 05u|\n", "% 05u", -42);
	result2 = ft_printf("%10s = |% 05u|\n", "% 05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 05u|\n", "% 05u", 42);
	result2 = ft_printf("%10s = |% 05u|\n", "% 05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5u|\n", "%0 5u", -42);
	result2 = ft_printf("%10s = |%0 5u|\n", "%0 5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0 5u|\n", "%0 5u", 42);
	result2 = ft_printf("%10s = |%0 5u|\n", "%0 5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%-+05u|\n", "%-+05u", -42);
	result2 = ft_printf("%10s = |%-+05u|\n", "%-+05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-+05u|\n", "%-+05u", 42);
	result2 = ft_printf("%10s = |%-+05u|\n", "%-+05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05u|\n", "%+-05u", -42);
	result2 = ft_printf("%10s = |%+-05u|\n", "%+-05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-05u|\n", "%+-05u", 42);
	result2 = ft_printf("%10s = |%+-05u|\n", "%+-05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5u|\n", "%0+-5u", -42);
	result2 = ft_printf("%10s = |%0+-5u|\n", "%0+-5u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%0+-5u|\n", "%0+-5u", 42);
	result2 = ft_printf("%10s = |%0+-5u|\n", "%0+-5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%- 05u|\n", "%- 05u", -42);
	result2 = ft_printf("%10s = |%- 05u|\n", "%- 05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%- 05u|\n", "%- 05u", 42);
	result2 = ft_printf("%10s = |%- 05u|\n", "%- 05u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");

	printf(LIGHT_BLUE2("test 4:\n"));
	result1 = printf("%10s = |%5.3u|\n", "%5.3u", -42);
	result2 = ft_printf("%10s = |%5.3u|\n", "%5.3u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4u|\n", "%5.4u", -42);
	result2 = ft_printf("%10s = |%5.4u|\n", "%5.4u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.4u|\n", "%5.4u", 42);
	result2 = ft_printf("%10s = |%5.4u|\n", "%5.4u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+5.4u|\n", "%+5.4u", 42);
	result2 = ft_printf("%10s = |%+5.4u|\n", "%+5.4u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% 5.4u|\n", "% 5.4u", 42);
	result2 = ft_printf("%10s = |% 5.4u|\n", "% 5.4u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.4u|\n", "%-5.4u", 42);
	result2 = ft_printf("%10s = |%-5.4u|\n", "%-5.4u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%#5u|\n", "%#5u", 42);
	result2 = ft_printf("%10s = |%#5u|\n", "%#5u", 42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%+ 05u|\n", "%+ 05u", -42);
	result2 = ft_printf("%10s = |%+ 05u|\n", "%+ 05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%+ 05u|\n", "%+ 05u", 42);
	result2 = ft_printf("%10s = |%+ 05u|\n", "%+ 05u", 42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05u|\n", "% +05u", -42);
	result2 = ft_printf("%10s = |% +05u|\n", "% +05u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |% +05u|\n", "% +05u", 42);
	result2 = ft_printf("%10s = |% +05u|\n", "% +05u", 42);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.3u|\n", "%05.3u", -42);
	result2 = ft_printf("%10s = |%05.3u|\n", "%05.3u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05u|\n", "%05u", -42);
	result2 = ft_printf("%10s = |%05u|\n", "%05u", -42);
	check_return(result1, result2);
	printf("--------------------------------\n");
	result1 = printf("%10s = |%05.-u|\n", "%05.-u", -42);
	result2 = ft_printf("%10s = |%05.-u|\n", "%05.-u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%05. u|\n", "%05. u", -42);
	result2 = ft_printf("%10s = |%05. u|\n", "%05. u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3u|\n", "%-5.3u", -42);
	result2 = ft_printf("%10s = |%-5.3u|\n", "%-5.3u", -42);
	check_return(result1, result2);
	result1 = printf("%10s = |%5.8u|\n", "%5.8u", -42);
	result2 = ft_printf("%10s = |%5.8u|\n", "%5.8u", -42);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6: number = 0\n"));
	result1 = printf("%10s = |%05.u|\n", "%05.u", 0);
	result2 = ft_printf("%10s = |%05.u|\n", "%05.u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05.3u|\n", "%05.3u", 0);
	result2 = ft_printf("%10s = |%05.3u|\n", "%05.3u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%05u|\n", "%05u", 0);
	result2 = ft_printf("%10s = |%05u|\n", "%05u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%5u|\n", "%5u", 0);
	result2 = ft_printf("%10s = |%5u|\n", "%5u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5u|\n", "%-5u", 0);
	result2 = ft_printf("%10s = |%-5u|\n", "%-5u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%-5.3u|\n", "%-5.3u", 0);
	result2 = ft_printf("%10s = |%-5.3u|\n", "%-5.3u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |%+-5.2u|\n", "%+-5.2u", 0);
	result2 = ft_printf("%10s = |%+-5.2u|\n", "%+-5.2u", 0);
	check_return(result1, result2);
	result1 = printf("%10s = |% -5.2u|\n", "% -5.2u", 0);
	result2 = ft_printf("%10s = |% -5.2u|\n", "% -5.2u", 0);
	check_return(result1, result2);

	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 7:\n"));
	result1 = printf("%%10u = |%10u|\n", 1000000);
	result2 = ft_printf("%%10u = |%10u|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%010u = |%010u|\n", 1000000);
	result2 = ft_printf("%%010u = |%010u|\n", 1000000);
	check_return(result1, result2);
	result1 = printf("%%-010u = |%-010u|\n", 1000000);
	result2 = ft_printf("%%-010u = |%-010u|\n", 1000000);
	check_return(result1, result2);
	printf("--------------------------------\n");
	printf(LIGHT_BLUE2("test 6:\n"));
	result1 = printf("%%5.3u = |%5.3u|\n", 1000000);
	result2 = ft_printf("%%5.3u = |%5.3u|\n", 1000000);
	check_return(result1, result2);
}