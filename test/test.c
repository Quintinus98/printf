/**
 * case 'i':
 * case 'd':
 *	val = va_arg(ap, int);
 *	if (val < 0)
 *	{
 *		val = -val;
 *		_putchar('-');
 *		sum++;
 *	}
 *	converted = convert(val, 10);
 *	_puts(converted);
 *	sum += xlen(converted);
 *	break;
*/

// int _putchar(char c)
// {
// 	static int i;
// 	static char buffer[1024];

// 	if (c == -1 || i >= 1024)
// 	{
// 		write(1, &buffer, i);
// 		i = 0;
// 	}
// 	if (c != -1)
// 	{
// 		buffer[i] = c;
// 		i++;
// 	}

// 	return (1);
// }

// int _putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }


// #include "main.h"

// /**
//  * _printf - prints all arguments.
//  * @format: format
//  * Return: Print
// */
// int _printf(const char *format, ...)
// {
// 	va_list ap;
// 	int sum = 0;
// 	int (*func)(va_list);
// 	const char *tmp;

// 	va_start(ap, format);
// 	if (!format || (format[0] == '%' && !format[1]))
// 		return (-1);
// 	if (format[0] == '%' && format[1] == ' ' && !format[2])
// 		return (-1);

// 	for (tmp = format; *tmp; tmp++)
// 	{
// 		if (*tmp == '%')
// 		{
// 			tmp++;
// 			if (*tmp == '%')
// 			{
// 				sum += _putchar('%');
// 				continue;
// 			}
// 			func = get_print(*tmp);
// 			sum += (func) ? func(ap) : _printf("%%%c", *tmp);
// 		}
// 		else
// 			sum += _putchar(*tmp);
// 	}
// 	_putchar(-1);
// 	va_end(ap);
// 	return (sum);
// }
