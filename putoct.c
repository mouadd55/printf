#include "main.h"

/**
 * _putoct - Prints an unsigned integer in octal notation
 *
 * @nb: The integer to print
 * @length: A pointer to the length of the output
*/

void _putoct(unsigned int nb, int *length)
{
	int *oct;
	int i;
    int o;

	o = 0;
	oct = malloc(sizeof(int) * 32);
	if (!nb)
	{
        *length += _putchar('0');
		free(oct);
		return ;
	}
	while (nb)
	{
		oct[o] = nb % 8;
		nb /= 8;
		o++;
	}
    i = o - 1;
	while (i >= 0)
    {
		*length += _putchar(oct[i] + '0');
        i--;
    }
	free(oct);
}
