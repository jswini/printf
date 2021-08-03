#include "holberton.h"
/**
 *
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int index;
	int length;
	char *pointer;

	va_start(ap, format);

	while (format[index])
	{
		pointer = va_arg(ap, char *);
		length = _strlen(pointer);
		find_format(pointer);
		index++;
	}
	return (length);
}

/**
 * find_format - determines which helper function to use
 * @f: format specifier
 *
 * Return: format specifier function pointer
 */
int (*find_format(char *spec))(va_list ap, int length)
{
	format_t type[] =	{
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	int index;

	for (index = 0; index < 5; index++)
	{
		if (type[index].format != NULL)
			return (type[index].f);
	}

	return (NULL);
}
