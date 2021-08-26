# ft_printf
Recode the libc’s printf function - 42 school project

## Mandatory
- format specifiers - `cspdiuxX%`

## Bonus
- Manage any combination of the following flags: `'-0.'` and minimum field width with all conversions
- flags - `'# +'`

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
