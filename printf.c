#include "main.h"

/**
 * _printf - prints all arguments.
 * @format: format
 * Return: Print
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, val;
	char *str, *converted;
	int sum = 0;

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
					sum++;
					break;
				case '%':
					_putchar('%');
					sum++;
					break;
				case 's':
					str = va_arg(ap, char *);
					_puts(str);
					sum += xlen(str);
					break;
				default:
					continue;
			}
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
		i++;
	}
	va_end(ap);
	return (sum);
}
