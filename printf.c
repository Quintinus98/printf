#include "main.h"

/**
 * _printf - prints all arguments.
 * @format: format
 * Return: Print
*/
int _printf(const char *format, ...)
{
	va_list ap;
	int sum = 0;
	int (*func)(va_list);
	const char *tmp;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (tmp = format; *tmp; tmp++)
	{
		if (*tmp == '%')
		{
			tmp++;
			if (!tmp)
				return (-1);

			func = get_print(*tmp);
			/** sum += (func) ? func(ap) : _printf("%%%c", *tmp); */
			if (!func)
				_printf("%%%c", *tmp);
			else
				sum += func(ap);
		}
		else
			sum += _putchar(*tmp);
	}
	va_end(ap);
	return (sum);
}
