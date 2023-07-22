#include "main.h"
#include <unistd.h>

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
 * _printf - prints all arguments.
 * @format: format
 * Return: Print
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, val;
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(ap, int));
					break;
				case 'd':
					val = va_arg(ap, int);
					_putchar(val + '0');
					break;
				case 'i':
					val = va_arg(ap, int);
					_putchar(val + '0');
					break;
				case '%':
					_putchar('%');
					break;
				case 's':
					str = va_arg(ap, char *);
					_puts(str);
					break;
				default:
					continue;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
