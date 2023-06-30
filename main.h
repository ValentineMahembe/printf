#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct format - match conversions for specifiers
 * @id: type char pointer to the specifier
 * @f: type pointer to the function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*f)();
}convert_match;

int _putchar(char c);
int _printf(const char *format, ...);
char *_itoa(int n);

#endif
