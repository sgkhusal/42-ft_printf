/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguilher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:40:46 by sguilher          #+#    #+#             */
/*   Updated: 2021/08/07 16:38:40 by sguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"

int	main(void){
	/* ************************* Printf ******************************** */
	// int	printf(const char *format, ...)

	printf(LIGHT_PURPLE("\nFT_PRINTF TESTER\n\n"));
	printf(LIGHT_RED("Specifiers: c, s, d, i, u, p, and x\n\n"));

	char	c = 'a';
	char	str[13] = "Hello World!";
	int		i = -42;
	unsigned int	j = 42;
	int *ptr = &i;

	printf(PINK("Test 1: printing a simple text: Harry Potter and Philosopher's Stone\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result: ");
	printf("Mr and Mrs Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much.\nThey were the last people you'd expect to be involved in anything strange or mysterious, because they just didn't hold with such nonsense.\nMr Dursley was the director of a firm called Grunnings, which made drills. He was a big, beefy man with hardly nay neck, although he did have a very large muoustache.\nMrs Dursley was thin and blonde and had nearly twice the usual amount of neck, which came in very useful as she spent so much of her time craning over garden fences, spying on the neigbours.\nThe Dursleys had a small son called Dudley and in their opinion there was no finer boy anywhere.\nThe Dursley had everything they wanted, but they also had a secret, and their greatest fear was that somebody would discover it.\nThey didn't think they could bear it if anyone found out about the Potters.");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	ft_printf("Mr and Mrs Dursley, of number four, Privet Drive, were proud to say that they were perfectly normal, thank you very much.\nThey were the last people you'd expect to be involved in anything strange or mysterious, because they just didn't hold with such nonsense.\nMr Dursley was the director of a firm called Grunnings, which made drills. He was a big, beefy man with hardly nay neck, although he did have a very large muoustache.\nMrs Dursley was thin and blonde and had nearly twice the usual amount of neck, which came in very useful as she spent so much of her time craning over garden fences, spying on the neigbours.\nThe Dursleys had a small son called Dudley and in their opinion there was no finer boy anywhere.\nThe Dursley had everything they wanted, but they also had a secret, and their greatest fear was that somebody would discover it.\nThey didn't think they could bear it if anyone found out about the Potters.");

	printf(PINK("Test 2: printing special characters\n"));
	printf(LIGHT_BLUE2("%20s"), "printf result: ");
	printf("\\\"\%\,\naudible alert:\a\n\bbackspace\n\fform feed\n\rcarriage return\n\t\ntab\vvertical tab\n");
	printf(LIGHT_BLUE2("%20s"), "ft_printf result: ");
	ft_printf("\\\"\%\,\naudible alert:\a\n\bbackspace\n\fform feed\n\rcarriage return\n\t\ntab\vvertical tab\n");

	printf(PINK("Test 3: Specifier %%:\n"));
	printf(LIGHT_BLUE2("test %% without flags, width, precision or a specifier after - it prints just the %:\n"));
	printf(LIGHT_BLUE2("%_this is a test\n"));
	printf(LIGHT_BLUE2("%kanother test\n"));

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