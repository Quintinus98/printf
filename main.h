#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include "stdarg.h"
#include <stdlib.h>


int _printf(const char *format, ...);
int _putchar(char c);
void _puts(char *s);
char *convert(unsigned int val, int base);
int ilen(int n);

#endif
