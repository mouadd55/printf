#ifndef MAIN_H
# define MAIN_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>

int     _putchar(char c);
void	_putnbr(int nbr, int *length);
void	_putstr(char *str, int *length);
int     _printf(const char *format, ...);
void     _putoct(unsigned int nb, int *length);
void	_putptr(unsigned long ptr, int *length);
void	_putunnbr(unsigned int nbr, int *length);
void	ft_puthex(unsigned long nbr, int *length);
void	_format(va_list args, const char s, int *length);
void	_puthex(unsigned int nbr, char format, int *length);

#endif
