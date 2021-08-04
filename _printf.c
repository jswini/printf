#include "holberton.h"
/**
 * _printf - prints characters
 * @format: determines how to output
 * Return: length
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int index = 0;
	int count = 0;

	va_start(ap, format);


	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == '\0')
			{
				return (-1);
			}
			count += find_format(format[index], ap);
		}
		else
		{
			_putchar(format[index]);
			count += 1;
		}
		index++;
	}
	return (count);
}

/**
 * find_format - determines which helper function to use
 * @ptr: format specifier
 * @ap: string or char to print
 * Return: format specifier function pointer
 */
int find_format(char ptr, va_list ap)
{
	format_t type[] = {
			{"c", print_char},
			{"s", print_string},
			{"%", print_percent},
			{"d", print_int},
			{"i", print_int},
			{NULL, NULL}
		};
	int index, count;

	for (index = 0; type[index].format; index++)
	{
		if (ptr == *type[index].format)
		{
			count = type[index].f(ap);
			break;
		}
	}
	return (count);
}
