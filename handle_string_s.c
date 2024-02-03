#include "main.h"
/**
 * handle_string_s - print a string.
 * @argument: argumen .
 * Return: the length of the string.
 */

int	handle_string_s(va_list argument)
{
	char *str;
	int i, len;

	str = va_arg(argument, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = ft_strlen(str);
		for (i = 0; i < len; i++)
			ft_putchar(str[i]);
		return (len);
	}
	else
	{
		len = ft_strlen(str);
		for (i = 0; i < len; i++)
			ft_putchar(str[i]);
		return (len);
	}
}
