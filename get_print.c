#include "main.h"

/**
 * get_print - pointer to function
 * @s: operator passed as argument to the program
 *
 * Return: the function for selected percent.
*/
int (*get_print(char s))(va_list ap)
{
	print_t prints[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_per},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while (prints[i].per != '\0')
	{
		if (prints[i].per == s)
			return (prints[i].f);
		i++;
	}

	return (NULL);
}
