#include "main.h"
/**
 * handle_nbr - prints an integer
 * @argument: list of integers to be printed
 * Return: total number of numbers
 */

int handle_nbr(va_list argument)
{
	long num = va_arg(argument, long);
	int count = 0;

	if (num < 0)
	{
		ft_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		ft_putchar('0');
		count++;
	}
	else
	{
		int reverse_num = 0;

		while (num > 0)
		{
			reverse_num = reverse_num * 10 + num % 10;
			num /= 10;
		}
		while (reverse_num > 0)
		{
			ft_putchar(reverse_num % 10 + '0');
			count++;
			reverse_num /= 10;
		}
	}
	return (count);
}
