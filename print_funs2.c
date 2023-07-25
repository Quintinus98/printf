#include "main.h"

/**
 * print_int - prints an integer
 * @ap: variable list.
 * Return: number of char printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * _putint - helper function that recurses
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void _putint(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		_putint(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * ilen - get length.
 * @n: number
 * Return: returns the length of a integer.
*/
int ilen(int n)
{
	unsigned int d = 0;
	unsigned int u;

	if (n < 0)
		u = n * -1;
	else
		u = n;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
