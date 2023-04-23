#include "main.h"

/**
 * _puthex - prints the address of a variable
 * @nbr: the number to print
 * @format: x or X
 * @length: pointer to count of characters printed
*/

void    _puthex(unsigned int nbr, char format, int *length)
{
	if (nbr < 10)
		*length += _putchar(nbr + '0');
	else if (nbr < 16)
	{
		if (format == 'x')
			*length += _putchar(nbr + 87);
		else if (format == 'X')
			*length += _putchar(nbr + 55);
	}
	else
	{
		_puthex(nbr / 16, format, length);
		_puthex(nbr % 16, format, length);
	}
}
