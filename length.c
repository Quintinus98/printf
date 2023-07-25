#include "main.h"

/**
 * xlen - get length.
 * @s: string
 * Return: returns the string length.
*/
int xlen(char *s)
{
	unsigned int cnt = 0;

	while (s && s[cnt])
		cnt++;
	return (cnt);
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

/**
 * convert - converts an integer to a specified base
 * @val: value to be converted
 * @base: base
 * Return: Returns a pointer to a char.
*/
char *convert(unsigned int val, int base)
{
	static char buffer[50], rep[] = "0123456789ABCDEF";
	char *ap;

	ap = &buffer[49];
	*ap = '\0';

	do {
		*(--ap) = rep[val % base];
		val /= base;
	} while (val != 0);

	return (ap);
}
