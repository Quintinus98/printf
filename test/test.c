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