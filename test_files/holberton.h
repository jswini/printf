#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
typedef struct formats
{
	char *format;
	int (*f)(va_list);
} format_t;

int (*find_format(const char format))(va_list);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);
int _strlen(char *s);

int _putchar(char c);

#endif /*HOLBERTON_H*/
