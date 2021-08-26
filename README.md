# ft_printf
Recode the libc’s printf function - 42 school project

## Mandatory
Recode format specifiers:
- `%c`: char
- `%s`: string
- `%p`: pointer
- `%d`: decimal signed integer
- `%i`: signed integer
- `%u`: unsigned integer
- `%x`: hexadecimal unsigned integer (lowercase)
- `%X`: hexadecimal unsigned integer (uppercase)
- `%%`: % printing

## Bonus
- Manage any combination of the following flags: `'-0.'` and minimum field width with all conversions
- flags - `'# +'`

### Understanding the flags:
- `number` (width): minimum number of charcters to be printed. If the value to be printed is shorter than this number,
the result is padded with blank spaces. The value is not truncated even if the result is larger
- `-` flag: left-justifies within the given field width. Right justification is the default
- `0` flag: left-pads the number with zeroes instead of spaces
- `+` flag: forces to precede the result with a plus or minus sign, even for positive numbers
- ` ` (space) flag: if no sign is going to be written, a blank space is inserted before the value
- `#` flag: used x or X specifiers - the value is preceded with 0x or 0X for values different than zero

#### Precision flag: `.number`
- When no precision is specified, the default is 1.
- If the period is specified without an explicit value for precision, 0 is assumed
- For integer specifiers d, i, o, u, x and X specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer.
- A precision of 0 means that no character is written for the value of 0
- For s is the maximum number of significant digits to be printed (By default all characters are printed until the ending null character is encountered)
- For c it is has no effect

For more information about this project see [ft_printf](https://github.com/sgkhusal/ft_printf/blob/main/ft_printf.pdf)

## Index

- [ft_printf:](https://github.com/sgkhusal/ft_printf/tree/main/ft_printf) code developed for the project
- [test:](https://github.com/sgkhusal/ft_printf/tree/main/test) my own test program
- [printf:](https://github.com/sgkhusal/ft_printf/tree/main/printf) some stuff to unsderstand printf behavior and use

## ft_printf function - <[ft_printf:](https://github.com/sgkhusal/ft_printf/tree/main/ft_printf)> folder

### function prototype:
`int	ft_printf(const char *str, ...);`

### additional function:
`int	ft_printf_fd(int fd, const char *str, ...);`

### Return values:
- number of characters writing in the stdout for ft_printf function
- number of characters writing in the file descriptor fd for ft_printf_fd function
- 0 if error

_Note: The ft_printf function outputs are according with the printf outputs for MacOS system (in Linux some outputs are different).

## How to use
- git clone https://github.com/sgkhusal/ft_printf.git
- in <[ft_printf:](https://github.com/sgkhusal/ft_printf/tree/main/ft_printf)> folder: `make`
- add the printf header into your code: `#include 'path/ft_printf.h'`
- call `ft_printf(*str, ...)` or `ft_printf_fd(fd, *str, ...)` in your code
- in compilation call `path/libftprintf.a`

_Note: The code is written in C language and thus needs the gcc/clang compiler and some standard C libraries to run.

# ft_printf-Tester
_Note: This tester was made for the new version of 42 school printf project (2021 2nd semester)

## How to use the tester
### In <[test:](https://github.com/sgkhusal/ft_printf/tree/main/test)> folder:
- Eddit `PRINTF_PATH` and `PRINTF` in the `Makefile` to your own ft_printf function
- make - mandatory tests
- make bcs - bonus tests for c and s conversions
- make bdiu - bonus tests for d, i and u conversions
- make bpx - bonus tests for p, x and X conversios
- make printf - creates libftprintf.a into your ft_printf folder

## External testers: <[testers.sh](https://github.com/sgkhusal/ft_printf/blob/main/test/testers.sh)>
- [printfTester](https://github.com/Tripouille/printfTester.git) by [Tripouille](https://github.com/Tripouille)
- [ft_printf_tester](https://github.com/paulo-santana/ft_printf_tester.git) by [paulo-santana](https://github.com/paulo-santana)
