#include "main.h"
/**
 * print_int - Prints character
 * @ap: variable list.
 *
 * Return: length of int
*/
int print_int(va_list ap)
{
	int val, len = ilen(val);

	val = va_arg(ap, int);
	if (val < 0)
	{
		_putchar('-');
		val = -val;
		len++;
	}
	_putint(val);

	return (len);
}

/**
 * _putint - puts integer
 * @num: number.
 *
 * Return: Nothing
*/
void _putint(int num)
{
	if ((num / 10))
		_putint(num / 10);
	_putchar((num % 10) + '0');
}
