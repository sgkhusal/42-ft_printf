/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:40:46 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/17 23:32:06 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils/test.h"

void	c_test()
{
	int	result1;
	int	result2;

	// printing char - specifier c
	char	c = 'a';
	printf(LIGHT_RED("\nprinting char - specifier c:\n"));
	result1 = printf(LIGHT_BLUE2("char %%c = %c\n"), c);
	result2 = ft_printf(LIGHT_BLUE2("char %%c = %c\n"), c);
	check_return(result1, result2);
	printf(LIGHT_RED("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %c\nelement 2: %c\nelement 3: %c\n"), c, 'b', 'c');
	result2 = ft_printf(LIGHT_BLUE2("element 1: %c\nelement 2: %c\nelement 3: %c\n"), c, 'b', 'c');
	check_return(result1, result2);
}

void	s_test()
{
	char	str[13] = "Hello World!";
	int	result1;
	int	result2;

	// printing string - specifier s
	printf(LIGHT_RED("\nprinting string - specifier s:\n"));
	result1 = printf(LIGHT_BLUE2("string %%s = %s\n"), str);
	result2 = ft_printf(LIGHT_BLUE2("string %%s = %s\n"), str);
	check_return(result1, result2);
	printf(LIGHT_RED("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("%s %s\n"), str, "Welcome to 42!");
	result2 = ft_printf(LIGHT_BLUE2("%s %s\n"), str, "Welcome to 42!");
	check_return(result1, result2);
}

void	di_test()
{
	int	result1;
	int	result2;
	int	i = -42;

	// printing signed decimal integer - specifiers d and i
	printf(LIGHT_RED("\n\nprinting signed decimal integer - specifiers d and i:\n"));
	result1 = printf(LIGHT_BLUE2("number %%d = %d\n"), i);
	result1 = ft_printf(LIGHT_BLUE2("number %%d = %d\n"), i);
	check_return(result1, result2);
	/*printf(LIGHT_BLUE2("number %%d using pointer = %d\n"), *ptr);
	printf(LIGHT_BLUE2("number %%d > maximum signed integer = %d\n"), 2147483648);
	printf(LIGHT_BLUE2("number %%d < minimum signed integer = %d\n"), -2147483649);
	printf(LIGHT_BLUE2("number %%i = %i\n"), i);
	printf(LIGHT_BLUE2("number %%i using pointer = %i\n"), *ptr);
	printf(LIGHT_BLUE2("number %%i > maximum signed integer = %i\n"), 2147483648);
	printf(LIGHT_BLUE2("number %%i < minimum signed integer = %i\n"), -2147483649);*/
}

/*void	_test()
{
	int	result1;
	int	result2;
}*/

int	main(void){
	/* ************************* Printf ******************************** */
	// int	printf(const char *format, ...)

	printf(LIGHT_PURPLE("\nFT_PRINTF TESTER\n\n"));

	text_tests();

	printf(LIGHT_RED("Specifiers: c, s, d, i, u, p, and x\n"));

	percentage_test();
	//empty_var_test();
	c_test();
	s_test();
	di_test();

	//
	//unsigned int	j = 42;

	// printing unsigned integer - specifier u:
	/*printf(LIGHT_RED("\n\nprinting unsigned integer - specifier u:\n"));
	printf(LIGHT_BLUE2("number %%u = %u\n"), j);
	printf(LIGHT_BLUE2("number %%u negative = %u\n"), i);
	printf(LIGHT_BLUE2("number %%u < 0 = %u\n"), -1);
	printf(LIGHT_BLUE2("number %%u > maximum unsigned integer = %u\n"), 4294967296);
	printf(LIGHT_BLUE2("number %%u > maximum unsigned integer = %u\n"), 4294967297);

	//int *ptr = &i;
	// printing pointer - specifier p
	printf(LIGHT_RED("\n\nprinting pointer - specifier p:\n"));
	printf(LIGHT_BLUE2("char pointer %%p = %p\n"), &c);
	printf(LIGHT_BLUE2("string pointer %%p = %p\n"), &str[0]);
	printf(LIGHT_BLUE2("int pointer %%p = %p\n"), ptr);
	printf(LIGHT_BLUE2("unsigned int pointer %%p = %p\n"), &j);

	// printing unsigned hex integer lowercase - specifier x
	printf(LIGHT_RED("\n\nprinting unsigned hex integer lowercase - specifier x:\n"));
	printf(LIGHT_BLUE2("unsigned hex integer %%x = %x\n"), j);
	printf(LIGHT_BLUE2("unsigned hex integer with negative number %%x = %x\n"), i);*/

	return (0);
}