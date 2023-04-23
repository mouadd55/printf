#include "main.h"

/**
 * _format - checks which char after %
 * @s: character after the %
 * @args: argument for the indentifier
 * @length: pointer to count of characters printed
 * Return: nothing
*/

void	_format(va_list args, const char s, int *length)
{
	if (s == 'c')
		*length += _putchar(va_arg(args, int));
	else if (s == 's')
		_putstr(va_arg(args, char *), length);
	else if (s == 'p')
		_putptr(va_arg(args, unsigned long long), length);
	else if (s == 'd' || s == 'i')
		_putnbr(va_arg(args, int), length);
	else if (s == 'u')
		_putunnbr(va_arg(args, unsigned int), length);
	else if (s == 'x')
		_puthex(va_arg(args, unsigned int), 'x', length);
	else if (s == 'X')
		_puthex(va_arg(args, unsigned int), 'X', length);
	else if (s == '%')
		*length += write(1, "%", 1);
}

/**
 * _printf - produces output according to a format
 * @s: string
 * Return: number of characters printed
*/

int _printf(const char *s, ...)
{
	int	i;
	int	length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (!s[++i])
				break;
			--i;
			_format(args, s[i + 1], &length);
			i++;
		}
		else
			length += _putchar(s[i]);
		i++;
	}
	va_end(args);
	return (length);
}

