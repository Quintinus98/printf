#include "main.h"
/**
 * print_int - Prints character
 * @ap: variable list.
 * Return: length of int
*/
int print_int(va_list ap)
{
	int val = va_arg(ap, int);
	int len = ilen(val);

	if (val <= 0)
		len++;
	_putint(val);
	return (len);
}

/**
 * _putint - puts integer
 * @num: number.
 * Return: Nothing
*/
void _putint(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
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
