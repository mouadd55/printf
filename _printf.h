#ifndef _PRINTF_H
# define _PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	_printf(const char *s, ...);
void	_puthex(unsigned int nbr, char format, int *length);
int	_putchar(char c);
void	_putnbr(int nbr, int *length);
void	_putstr(char *str, int *length);
void	_putptr(unsigned long long ptr, int *length);
void	ft_puthex(unsigned long long nbr, int *length);
void	_putunnbr(unsigned int nbr, int *length);
void	_format(va_list args, const char s, int *length);

#endif
