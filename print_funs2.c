#include "main.h"
/**
 * print_int - Prints character
 * @ap: variable list.
 *
 * Return: length of int
*/
int print_int(va_list ap)
{
	int val, len = 0;
	char *converted;

	val = va_arg(ap, int);
	if (val < 0)
	{
		_putchar('-');
		val = -val;
		len++;
	}
	converted = convert(val, 10);
	_puts(converted);
	len += xlen(converted);
	return (len);
}
