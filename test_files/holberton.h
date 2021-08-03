#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>

typedef struct formats
{
	char *format;
	int (*f)(char *, int length);
} format_t;

int (*find_format(char *spec))(va_list ap, int length);
int _printf(const char *format, ...);
int print_char(char c, int n);
int print_str();
int print_percent(void);
int print_int();
int _strlen(char *s);

int _putchar(char c);

#endif /*HOLBERTON_H*/
