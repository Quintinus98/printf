#include "main.h"
/**
 * _putchar - Prints character
 * @c: variable c
 *
 * Return: Always 0
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * _puts - Puts string
 * @s: str is a char
 *
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
 * print_char - Prints character
 * @ap: variable list
 *
 * Return: Always 0
*/
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_per - Prints character
 * @ap: variable list
 *
 * Return: Always 0
*/
int print_per(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);
}

/**
 * print_string - Prints character
 * @ap: variable list
 *
 * Return: Always 0
*/
int print_string(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (!str)
		str = "(null)";
	_puts(str);
	return (xlen(str));
}
