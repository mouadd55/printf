#include "main.h"

/**
 * _putstr - prints a string
 * @str: string to be printed
 * @length: pointer to count the characters printed
*/

void    _putstr(char *str, int *length)
{
	int     i;

	i = -1;
	if (!str)
	{
		*length += write(1, "(null)", 6);
		return;
	}
	while (str[++i])
		*length += _putchar(str[i]);
}
