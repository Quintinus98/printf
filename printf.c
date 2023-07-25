#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: len of printf.
 */
int _printf(const char *format, ...)
{
	int (*func)(va_list);
	const char *p;
	va_list ap;

	register int count = 0;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			func = get_print(*p);
			count += (func)
				? func(ap)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(ap);
	return (count);
}
