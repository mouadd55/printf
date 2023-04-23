#include "_printf.h"

/**
 * _putnbr - prints an integer
 * @nbr: number to print
 * @length: pointer to count of characters printed
*/

void	_putnbr(int nbr, int *length)
{
	if (nbr == -2147483648)
	{
		*length += write(1, "-2147483648", 11);
		return;
	}
	if (nbr < 0)
	{
		*length += _putchar('-');
		nbr *= (-1);
	}
	if (nbr < 10)
		*length += _putchar(nbr + '0');
	else
	{
		_putnbr(nbr / 10, length);
		_putnbr(nbr % 10, length);
	}
}

/**
 * _putunnbr - prints an integer
 * @nbr: number to print
 * @length: pointer to count of characters printed
*/

void	_putunnbr(unsigned int nbr, int *length)
{
	if (nbr < 10)
		*length += _putchar(nbr + '0');
	else
	{
		_putunnbr(nbr / 10, length);
		_putunnbr(nbr % 10, length);
	}
}
