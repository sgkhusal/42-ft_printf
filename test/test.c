/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:40:46 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/13 21:07:34 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	check_return(int n1, int n2){
	if (n1 == n2)
		printf(GREEN("OK\n"));
	else
	{
		printf(RED("NOT OK\n"));
		printf(RED("printf return = %i\n"), n1);
		printf(RED("ft_printf return = %i\n"), n2);
	}

}

int	main(void){
	/* ************************* Printf ******************************** */
	// int	printf(const char *format, ...)

	printf(LIGHT_PURPLE("\nFT_PRINTF TESTER\n\n"));
	printf(LIGHT_RED("Specifiers: c, s, d, i, u, p, and x\n\n"));

	//char	c = 'a';
	//char	str[13] = "Hello World!";
	//int		i = -42;
	//unsigned int	j = 42;
	//int *ptr = &i;
	int	result1;
	int	result2;

	printf(PINK("Test 1.1: printing a simple text:\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result:\n");
	result1 = printf("test\n");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	printf("\n");
	result2 = ft_printf("test\n");
	check_return(result1, result2);

	printf(PINK("\nTest 1.2: printing a bigger text: Harry Potter and Philosopher's Stone\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result:\n");
	result1 = printf("Mr and Mrs Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much.\nThey were the last people you'd expect to be involved in anything strange or mysterious, because they just didn't hold with such nonsense.\nMr Dursley was the director of a firm called Grunnings, which made drills. He was a big, beefy man with hardly nay neck, although he did have a very large muoustache.\nMrs Dursley was thin and blonde and had nearly twice the usual amount of neck, which came in very useful as she spent so much of her time craning over garden fences, spying on the neigbours.\nThe Dursleys had a small son called Dudley and in their opinion there was no finer boy anywhere.\nThe Dursley had everything they wanted, but they also had a secret, and their greatest fear was that somebody would discover it.\nThey didn't think they could bear it if anyone found out about the Potters.\n");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	printf("\n");
	result2 = ft_printf("Mr and Mrs Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much.\nThey were the last people you'd expect to be involved in anything strange or mysterious, because they just didn't hold with such nonsense.\nMr Dursley was the director of a firm called Grunnings, which made drills. He was a big, beefy man with hardly nay neck, although he did have a very large muoustache.\nMrs Dursley was thin and blonde and had nearly twice the usual amount of neck, which came in very useful as she spent so much of her time craning over garden fences, spying on the neigbours.\nThe Dursleys had a small son called Dudley and in their opinion there was no finer boy anywhere.\nThe Dursley had everything they wanted, but they also had a secret, and their greatest fear was that somebody would discover it.\nThey didn't think they could bear it if anyone found out about the Potters.\n");
	check_return(result1, result2);

	printf(PINK("\nTest 2: printing special characters\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result:\n");
	result1 = printf("\\\",\n");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	printf("\n");
	result2 = ft_printf("\\\",\n");
	check_return(result1, result2);
	result1 = printf("alert: \\a\a\n");
	result2 = ft_printf("alert: \\a\a\n");
	check_return(result1, result2);
	result1 = printf("\bbackspace \\b\n");
	result2 = ft_printf("\bbackspace \\b\n");
	check_return(result1, result2);
	result1 = printf("\fform feed \\f\n");
	result2 = ft_printf("\fform feed \\f\n");
	check_return(result1, result2);
	result1 = printf("\rcarriage return \\r\n");
	result2 = ft_printf("\rcarriage return \\r\n");
	check_return(result1, result2);
	result1 = printf("\ttab \\t\n");
	result2 = ft_printf("\ttab \\t\n");
	check_return(result1, result2);
	result1 = printf("\vvertical tab \\v\n");
	result2 = ft_printf("\vvertical tab \\v\n");
	check_return(result1, result2);
	result1 = printf("\thorizontal tab \\t\n");
	result2 = ft_printf("\thorizontal tab \\t\n");
	check_return(result1, result2);
	result1 = printf("\nnew line \\n\n");
	result2 = ft_printf("\nnew line \\n\n");
	check_return(result1, result2);

	printf(PINK("\nTest 3: Specifier %%:\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result:\n");
	result1 = printf("100%%\n");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	printf("\n");
	result2 = ft_printf("100%%\n");
	check_return(result1, result2);
	/* Tests with % that give error in printf when compiled with the flags -Wall -Wextra -Werror*/
	/*result1 = printf("%_this is_a test\n");
	result2 = ft_printf("%_this is_a test\n");
	check_return(result1, result2);
	result1 = printf("bbbb%kanother test\n");
	result2 = ft_printf("bbbb%kanother test\n");
	check_return(result1, result2);*/

	/*printf(PINK("\nwhen we do not indicate the variable, it prints anything from a place in the memory according with the variable type:\n"));
	printf(LIGHT_BLUE2("%%c: %c\n"));
	printf(LIGHT_BLUE2("%%i: %i\n"));
	printf(LIGHT_BLUE2("%%x: %x\n"));

	// printing char - specifier c
	printf(LIGHT_RED("\n\nprinting char - specifier c:\n"));
	printf(LIGHT_BLUE2("char %%c = %c\n"), c);
	printf(LIGHT_BLUE2("char %%c < 0: %c\n"), -1);
	printf(LIGHT_BLUE2("char %%c > 256: %c\n"), 257);

	// printing string - specifier s
	printf(LIGHT_RED("\n\nprinting string - specifier s:\n"));
	printf(LIGHT_BLUE2("string %%s = %s\n"), str);

	// printing signed decimal integer - specifiers d and i
	printf(LIGHT_RED("\n\nprinting signed decimal integer - specifiers d and i:\n"));
	printf(LIGHT_BLUE2("number %%d = %d\n"), i);
	printf(LIGHT_BLUE2("number %%d using pointer = %d\n"), *ptr);
	printf(LIGHT_BLUE2("number %%d > maximum signed integer = %d\n"), 2147483648);
	printf(LIGHT_BLUE2("number %%d < minimum signed integer = %d\n"), -2147483649);
	printf(LIGHT_BLUE2("number %%i = %i\n"), i);
	printf(LIGHT_BLUE2("number %%i using pointer = %i\n"), *ptr);
	printf(LIGHT_BLUE2("number %%i > maximum signed integer = %i\n"), 2147483648);
	printf(LIGHT_BLUE2("number %%i < minimum signed integer = %i\n"), -2147483649);

	// printing unsigned integer - specifier u:
	printf(LIGHT_RED("\n\nprinting unsigned integer - specifier u:\n"));
	printf(LIGHT_BLUE2("number %%u = %u\n"), j);
	printf(LIGHT_BLUE2("number %%u negative = %u\n"), i);
	printf(LIGHT_BLUE2("number %%u < 0 = %u\n"), -1);
	printf(LIGHT_BLUE2("number %%u > maximum unsigned integer = %u\n"), 4294967296);
	printf(LIGHT_BLUE2("number %%u > maximum unsigned integer = %u\n"), 4294967297);

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