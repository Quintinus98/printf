#include "main.h"

/**
 * _printf - prints all arguments.
 * @format: format
 * Return: Print
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int sum = 0;
	int (*func)(va_list);

	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ')
				return (-1);
			func = get_print(format[i]);
			if (!func)
				return (-1);
			sum += func(ap);
		}
		else
			sum += _putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (sum);
}
