#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include "stdarg.h"
#include <stdlib.h>

/**
 * struct print - struct arg
 * @per: The percent
 * @f: The function associated
 *
 * Description: calls the print functions
*/

typedef struct print
{
	char per;
	int (*f)(va_list ap);
} print_t;

char *convert(unsigned int val, int base);
int ilen(int n);
int xlen(char *s);

void _putint(int num);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list ap);
void _puts(char *s);
int print_string(va_list ap);
int print_per(va_list ap);
int (*get_print(const char s))(va_list ap);
int print_int(va_list ap);

#endif
