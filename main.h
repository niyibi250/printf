#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} func_t;

int (*get_printfop(const char *format))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_integer(va_list args);
int print_dec(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int print_string(va_list args);

#endif
