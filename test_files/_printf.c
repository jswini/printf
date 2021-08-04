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
	int (*pointer)(va_list);
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
		}
		pointer = find_format(format[index]);
		if (pointer == NULL)
			return (-1);
		_putchar(format[index]);
		index++;
	}
	return (0);
}

/**
 * find_format - determines which helper function to use
 * @f: format specifier
 *
 * Return: format specifier function pointer
 */
int (*find_format(const char pointer))(va_list)
{
	format_t type[] =
		{
			{"c", print_char},
			{"s", print_string},
			{"%", print_percent},
			{"d", print_int},
			{"i", print_int},
			{NULL, NULL}
		};
	int index;

	for (index = 0; type[index].format; index++)
	{
		if (pointer == *type[index].format)
			return (type[index].f);
	}
	return ('\0');
}
