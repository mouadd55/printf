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
		_putptr(va_arg(args, unsigned long), length);
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
 * @format: string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	int	i;
	int	length;
	va_list	args;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (!format[++i])
				break;
			--i;
			_format(args, format[i + 1], &length);
			i++;
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}

int main(void)
{
	    int len;
	        int len2;
		    unsigned int ui;
		        void *addr;

			    len = _printf("Let's try to printf a simple sentence.\n");
			        len2 = printf("Let's try to printf a simple sentence.\n");
				    ui = (unsigned int)INT_MAX + 1024;
				        addr = (void *)0x7ffe637541f0;
					    _printf("Length:[%d, %i]\n", len, len);
					        printf("Length:[%d, %i]\n", len2, len2);
						    _printf("Negative:[%d]\n", -762534);
						        printf("Negative:[%d]\n", -762534);
							    _printf("Unsigned:[%u]\n", ui);
							        printf("Unsigned:[%u]\n", ui);
								    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
								        printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
									    _printf("Character:[%c]\n", 'H');
									        printf("Character:[%c]\n", 'H');
										    _printf("String:[%s]\n", "I am a string !");
										        printf("String:[%s]\n", "I am a string !");
											    _printf("Address:[%p]\n", addr);
											        printf("Address:[%p]\n", addr);
												    len = _printf("Percent:[%%]\n");
												        len2 = printf("Percent:[%%]\n");
													    _printf("Len:[%d]\n", len);
													        printf("Len:[%d]\n", len2);
														    return (0);
}

