#include "main.h"

/**
 * handle_char_c - prints a char.
 * @argument : arguments.
 * Return: 1.
 */
int handle_char_c(va_list argument)
{
	char s;

	s = va_arg(argument, int);
	ft_putchar(s);
	return (1);
}
