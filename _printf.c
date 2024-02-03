#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	convert_o arr[] = {
	{"%s",	handle_string_s}, {"%d",	handle_nbr},
	{"%i",	handle_nbr},
	{"%c",	handle_char_c}, {"%b",	handle_binary_b},
	{"%u",	handle_unsigned_u}, {"%o",	handle_oct_o},
	{"%x",	handle_hex_x},	{"%X",	handle_HEX_X}
	};

	va_list argument;

	int i = 0;
	int j;
	int len = 0;

	va_start(argument, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		va_end(argument);
	return (-1);

	while (format[i] != '\0')
	{
	int found_match = 0;

	for (j = 8; j >= 0; j--)
	{
	if (arr[j].d[0] == format[i] && arr[j].d[1] == format[i + 1])
	len += arr[j].fun(argument);
	i = i + 2;
	found_match = 1;
	break;
	}
	if (!found_match)
		ft_putchar(format[i]);
	len++;
	i++;
	}
	va_end(argument);
	return (len);
}
