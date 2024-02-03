#include "main.h"
/**
 * ft_strlen - Returns the lenght of a string.
 * @str: Type char pointer
 * Return: i.
 *
 */

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
