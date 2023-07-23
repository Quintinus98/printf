#include "main.h"
#include <string.h>

/**
 * get_op_func - pointer to function
 * @s: operator passed as argument to the program
 *
 * Return: Sum of 2 numbers
*/
int (*get_print(char s))(va_list ap)
{
	print_t prints[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_per}
	};
	int i;

	i = 0;
	while (prints[i].per)
	{
		if (prints[i].per == s)
			return (prints[i].f);
		i++;
	}

	return (NULL);
}
