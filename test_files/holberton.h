#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct formats
{
	char *format;
	int (*f)();
} format_t;

int (find_format(char *pointer));
int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *array);
int print_percent(void);
int print_int(int num);
int _strlen(char *s);

int _putchar(char c);

#endif /*HOLBERTON_H*/
