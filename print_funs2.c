#include "main.h"

/**
 * print_int - prints an integer
 * @ap: variable list.
 * Return: number of char printed
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	int res = ilen(n);

	if (n <= 0)
		res++;
	_putint(n);
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
	unsigned int cnt = 0;

	if (n < 0)
		n = -n;

	while (n != 0)
	{
		n = n / 10;
		cnt++;
	}
	return (cnt);
}
