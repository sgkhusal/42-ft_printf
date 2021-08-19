/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:40:46 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/19 01:55:13 by sguilher         ###   ########.fr       */
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
	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %c\nelement 2: %c\nelement 3: %c\n"), c, 'b', 'c');
	printf("--------------\n");
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
	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("%s %s\n"), str, "Welcome to 42!");
	result2 = ft_printf(LIGHT_BLUE2("%s %s\n"), str, "Welcome to 42!");
	check_return(result1, result2);
}

void	di_test()
{
	int	result1;
	int	result2;
	int	i = -42;
	int *ptr = &i;

	// printing signed decimal integer - specifiers d and i
	printf(LIGHT_RED("\n\nprinting signed decimal integer - specifiers d and i:\n"));
	printf(PINK("\nbasic tests - specifier d:\n"));
	result1 = printf(LIGHT_BLUE2("number %%d = %d\n"), i);
	result2 = ft_printf(LIGHT_BLUE2("number %%d = %d\n"), i);
	check_return(result1, result2);
	result1 = printf("number %%d using pointer = %d\n", *ptr);
	result2 = ft_printf("number %%d using pointer = %d\n", *ptr);
	check_return(result1, result2);
	result1 = printf("number %%d > maximum signed integer = %d\n", 2147483648);
	result2 = ft_printf("number %%d > maximum signed integer = %d\n", 2147483648);
	check_return(result1, result2);
	result1 = printf("number %%d < minimum signed integer = %d\n", -2147483649);
	result2 = ft_printf("number %%d < minimum signed integer = %d\n", -2147483649);
	check_return(result1, result2);

	printf(PINK("\nbasic tests - specifier i:\n"));
	result1 = printf(LIGHT_BLUE2("number %%i = %i\n"), i);
	result2 = ft_printf(LIGHT_BLUE2("number %%i = %i\n"), i);
	check_return(result1, result2);
	result1 = printf("number %%d using pointer = %d\n", *ptr);
	result2 = ft_printf("number %%d using pointer = %d\n", *ptr);
	check_return(result1, result2);
	result1 = printf("number %%d > maximum signed integer = %d\n", 2147483648);
	result2 = ft_printf("number %%d > maximum signed integer = %d\n", 2147483648);
	check_return(result1, result2);
	result1 = printf("number %%d < minimum signed integer = %d\n", -2147483649);
	result2 = ft_printf("number %%d < minimum signed integer = %d\n", -2147483649);
	check_return(result1, result2);

	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %d\nelement 2: %d\nelement 3: %i\nelement 4: %i\n"), i, 5456211, 0, 0056);
	printf("--------------------\n");
	result2 = ft_printf(LIGHT_BLUE2("element 1: %d\nelement 2: %d\nelement 3: %i\nelement 4: %i\n"), i, 5456211, 0, 0056);
	check_return(result1, result2);
}

void	u_test()
{
	int	result1;
	int	result2;
	unsigned int	i = 42;
	int *ptr = &i;

	// printing unsigned integer - specifier u:
	printf(LIGHT_RED("\n\nprinting unsigned integer - specifier u:\n"));
	result1 = printf(LIGHT_BLUE2("number %%u = %u\n"), i);
	result2 = ft_printf(LIGHT_BLUE2("number %%u = %u\n"), i);
	check_return(result1, result2);
	result1 = printf("number %%u using pointer = %u\n", *ptr);
	result2 = ft_printf("number %%u using pointer = %u\n", *ptr);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("number %%u negative = %u\n"), -42);
	result2 = ft_printf(LIGHT_BLUE2("number %%u negative = %u\n"), -42);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("number %%u < 0 = %u\n"), -1);
	result2 = ft_printf(LIGHT_BLUE2("number %%u < 0 = %u\n"), -1);
	check_return(result1, result2);
	result1 = printf("number %%u = maximum unsigned integer = %u\n", 4294967295);
	result2 = ft_printf("number %%u = maximum unsigned integer = %u\n", 4294967295);
	check_return(result1, result2);
	result1 = printf("number %%u > maximum unsigned integer = %u\n", 4294967296);
	result2 = ft_printf("number %%u > maximum unsigned integer = %u\n", 4294967296);
	check_return(result1, result2);
	printf("----------------------------------------\n");
	result1 = printf("number %%u > maximum unsigned integer = %u\n", 4294967297);
	result2 = ft_printf("number %%u > maximum unsigned integer = %u\n", 4294967297);
	check_return(result1, result2);

	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %u\nelement 2: %u\nelement 3: %u\nelement 4: %u\n"), i, 2147483648, 1000000000, 0);
	printf("--------------------\n");
	result2 = ft_printf(LIGHT_BLUE2("element 1: %u\nelement 2: %u\nelement 3: %u\nelement 4: %u\n"), i, 2147483648, 1000000000, 0);
	check_return(result1, result2);
}

void	lowerhex_test()
{
	int	result1;
	int	result2;
	int	i = 42;
	int *ptr = &i;

	// printing unsigned hex integer lowercase - specifier x
	printf(LIGHT_RED("\n\nprinting unsigned hex integer lowercase - specifier x:\n"));
	printf(PINK("\nbasic tests - specifier x:\n"));
	result1 = printf(LIGHT_BLUE2("unsigned hex integer %%x = %x\n"), i);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer %%x = %x\n"), i);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("using a pointer %%x = %x\n"), *ptr);
	result2 = ft_printf(LIGHT_BLUE2("using a pointer %%x = %x\n"), *ptr);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("unsigned hex integer %%x = %x\n"), 438);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer %%x = %x\n"), 438);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("big unsigned hex integer %%x = %x\n"), 2147483648);
	result2 = ft_printf(LIGHT_BLUE2("big unsigned hex integer %%x = %x\n"), 2147483648);
	check_return(result1, result2);
	printf("----------------------------------------\n");
	result1 = printf("number %%x = maximum unsigned integer = %x\n", 4294967295);
	result2 = ft_printf("number %%x = maximum unsigned integer = %x\n", 4294967295);
	check_return(result1, result2);
	result1 = printf("number %%x > maximum unsigned integer = %x\n", 4294967296);
	result2 = ft_printf("number %%x > maximum unsigned integer = %x\n", 4294967296);
	check_return(result1, result2);
	result1 = printf("number %%x > maximum unsigned integer = %x\n", 4294967297);
	result2 = ft_printf("number %%x > maximum unsigned integer = %x\n", 4294967297);
	check_return(result1, result2);
	printf("----------------------------------------\n");
	result1 = printf(LIGHT_BLUE2("unsigned hex integer with negative number %%x = %x\n"), -42);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer with negative number %%x = %x\n"), -42);
	check_return(result1, result2);

	printf(PINK("\nspecifier x - printing a pointer:\n"));
	result1 = printf(LIGHT_BLUE2("pointer value in %%x = %x\n"), ptr);
	result2 = ft_printf(LIGHT_BLUE2("pointer value in %%x = %x\n"), ptr);
	check_return(result1, result2);

	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %x\nelement 2: %x\nelement 3: %x\nelement 4: %x\n"), i, 5456211, 0, 0056);
	printf("--------------------\n");
	result2 = ft_printf(LIGHT_BLUE2("element 1: %x\nelement 2: %x\nelement 3: %x\nelement 4: %x\n"), i, 5456211, 0, 0056);
	check_return(result1, result2);
}

void	upperhex_test()
{
	int	result1;
	int	result2;
	int	i = 42;
	int *ptr = &i;

	// printing unsigned hex integer uppercase - specifier X
	printf(LIGHT_RED("\n\nprinting unsigned hex integer uppercase - specifier X:\n"));
	printf(PINK("\nbasic tests - specifier X:\n"));
	result1 = printf(LIGHT_BLUE2("unsigned hex integer %%X = %X\n"), i);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer %%X = %X\n"), i);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("using a pointer %%X = %X\n"), *ptr);
	result2 = ft_printf(LIGHT_BLUE2("using a pointer %%X = %X\n"), *ptr);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("unsigned hex integer %%X = %X\n"), 438);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer %%X = %X\n"), 438);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("big unsigned hex integer %%X = %X\n"), 2147483648);
	result2 = ft_printf(LIGHT_BLUE2("big unsigned hex integer %%X = %X\n"), 2147483648);
	check_return(result1, result2);
	printf("----------------------------------------\n");
	result1 = printf("number %%X = maximum unsigned integer = %X\n", 4294967295);
	result2 = ft_printf("number %%X = maximum unsigned integer = %X\n", 4294967295);
	check_return(result1, result2);
	result1 = printf("number %%X > maximum unsigned integer = %X\n", 4294967296);
	result2 = ft_printf("number %%X > maximum unsigned integer = %X\n", 4294967296);
	check_return(result1, result2);
	result1 = printf("number %%X > maximum unsigned integer = %X\n", 4294967297);
	result2 = ft_printf("number %%X > maximum unsigned integer = %X\n", 4294967297);
	check_return(result1, result2);
	printf("----------------------------------------\n");
	result1 = printf(LIGHT_BLUE2("unsigned hex integer with negative number %%X = %X\n"), -42);
	result2 = ft_printf(LIGHT_BLUE2("unsigned hex integer with negative number %%X = %X\n"), -42);
	check_return(result1, result2);

	printf(PINK("\nspecifier X - printing a pointer:\n"));
	result1 = printf(LIGHT_BLUE2("pointer value in %%X = %X\n"), ptr);
	result2 = ft_printf(LIGHT_BLUE2("pointer value in %%X = %X\n"), ptr);
	check_return(result1, result2);

	printf(PINK("\nprinting more than one element:\n"));
	result1 = printf(LIGHT_BLUE2("element 1: %X\nelement 2: %X\nelement 3: %X\nelement 4: %X\n"), i, 5456211, 0, 0056);
	printf("--------------------\n");
	result2 = ft_printf(LIGHT_BLUE2("element 1: %X\nelement 2: %X\nelement 3: %X\nelement 4: %X\n"), i, 5456211, 0, 0056);
	check_return(result1, result2);
}

void	p_test()
{
	int		result1;
	int		result2;
	int		i = 42;
	int		*p = &i;
	int		**pp = &p;
	char	c = 'a';
	char	*pc = &c;
	char	**ppc = &pc;
	char	*str = "Hello World";
	unsigned int	u = 17923818;

	// printing pointer - specifier p
	printf(LIGHT_RED("\n\nprinting pointer - specifier p:\n"));
	printf(PINK("\nbasic tests:\n"));
	result1 = printf(LIGHT_BLUE2("char pointer %%p = %p\n"), pc);
	result2 = ft_printf(LIGHT_BLUE2("char pointer %%p = %p\n"), pc);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("string pointer %%p = %p\n"), &str[0]);
	result2 = ft_printf(LIGHT_BLUE2("string pointer %%p = %p\n"), &str[0]);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("int pointer %%p = %p\n"), pp);
	result2 = ft_printf(LIGHT_BLUE2("int pointer %%p = %p\n"), pp);
	check_return(result1, result2);
	result1 = printf(LIGHT_BLUE2("unsigned int pointer %%p = %p\n"), &u);
	result2 = ft_printf(LIGHT_BLUE2("unsigned int pointer %%p = %p\n"), &u);
	check_return(result1, result2);
}

int	main(void){
	/* ************************* Printf ******************************** */
	// int	printf(const char *format, ...)

	printf(LIGHT_PURPLE("\nFT_PRINTF TESTER\n\n"));

	/*text_tests();

	printf(LIGHT_RED("Specifiers: c, s, d, i, u, p, and x\n"));

	percentage_test();
	empty_var_test();
	c_test();
	s_test();
	di_test();
	u_test();*/
	lowerhex_test();
	upperhex_test();
	p_test();

	//

	return (0);
}