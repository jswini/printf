#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>

typedef struct formats
{
	char *format;
	void (*find_format(char *f))(args)
} format_t

int (*find_format(format))(args);
int _printf(const char *format, ...);
void print_char();
void print_str();
void print_percent();
void print_int();

int _putchar(char c);

#endif /*HOLBERTON_H*/
