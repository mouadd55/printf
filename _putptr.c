#include "main.h"

/**
 * ft_puthex - prints the address of a variable
 * @nbr: the number to print
 * @length: pointer to count of characters printed
*/

void	ft_puthex(unsigned long nbr, int *length)
{
	int	i;
	char	str[16];

	i = 0;
	if (!nbr)
		*length += write(1, "0", 1);
	while (nbr)
	{
		if ((nbr % 16) < 10)
			str[i] = (nbr % 16) + 48;
		else
			str[i] = (nbr % 16) + 87;
		nbr /= 16;
		i++;
	}
	while (i--)
		*length += write(1, &str[i], 1);
}


/**
 * _putptr - prints the address of a variable
 * @ptr: the number to print
 * @length: pointer to count of characters printed
*/

void	_putptr(unsigned long ptr, int *length)
{
	if (!ptr)
		*length += write(1, "(null)", 6);
	else
	{
		*length += write(1, "0x", 2);
		ft_puthex(ptr, length);
	}
}

