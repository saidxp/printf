#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>



/**
 * struct convert - match the conversion specifiers for printf
 * @d: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @fun: type pointer to function for the conversion specifier
 *
 */

typedef struct convert
{
	char *d;
	int (*fun)();
} convert_o;


int	_printf(const char *format, ...);
int	handle_nbr(va_list argument);
int	handle_string_s(va_list argument);
int	ft_strlen(char *str);
int	ft_putchar(char c);
int	handle_char_c(va_list argument);
int	handle_binary_b(va_list argument);
int	handle_unsigned_u(va_list argument);
int	handle_oct_o(va_list argument);
int	handle_hex_x(va_list argument);
int	handle_HEX_X(va_list argument);

#endif
