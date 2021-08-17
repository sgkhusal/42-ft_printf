/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:09:44 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/16 05:05:06 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils/test.h"

void	c_bonus_test()
{
	int	result1;
	int	result2;

	char	c = 'a';
	printf(PINK("\nprinting char with Flags - specifier c:\n"));
	printf(LIGHT_BLUE2("test 1:\n"));
	result1 = printf("%%c = |%c|\n", c);
	result2 = ft_printf("%%c = |%c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 2:\n"));
	result1 = printf("%%5c = |%5c|\n", c);
	result2 = ft_printf("%%5c = |%5c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 3:\n"));
	result1 = printf("%%-5c = |%-5c|\n", c);
	result2 = ft_printf("%%-5c = |%-5c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 4:\n"));
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

	printf(LIGHT_BLUE2("test 5:\n"));
	result1 = printf("%%.5c = |%.5c|\n", c); // undefined behavior
	result2 = ft_printf("%%.5c = |%.5c|\n", c);
	check_return(result1, result2);
	result1 = printf("%%5.c = |%5.c|\n", c);
	result2 = ft_printf("%%5.c = |%5.c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 6:\n"));
	result1 = printf("%%50c = |%50c|\n", c); // entende como um numero
	result2 = ft_printf("%%50c = |%50c|\n", c);
	check_return(result1, result2);

	printf(LIGHT_BLUE2("test 7:\n"));
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

	printf(LIGHT_BLUE2("test 8:\n"));
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
	/*
	printf("%35s = |%-05c|\n", "%%-05c", c);
	printf("%35s = |%0-5c|\n", "%%0-5c", c);
	printf("%35s = |%.5c|\n", "%%.5c", c);
	printf("%35s = |%-.5c|\n", "%%-.5c", c);//////////////
	printf("%35s = |%.-5c|\n", "%%.-5c", c);
	printf("%35s = |%0.5c|\n", "%%0.5c", c);
	printf("%35s = |%.05c|\n", "%%.05c", c);
	printf("%35s = |%5.c|\n", "%%5.c", c);
	printf("%35s = |%-5.c|\n", "%%-5.c", c);
	printf("%35s = |%-05.c|\n", "%%-05.c", c);
	printf("%35s = |%05.c|\n", "%%05.c", c);
	printf("%35s = |%0-5.c|\n", "%%0-5.c", c);*/
}

int	main(){
	c_bonus_test();
	return (0);
}