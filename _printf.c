#include "holberton.h"
/**
 *
 */
int _printf(const char *format, ...)
{

}

/**
 * find_format - determines which helper function to use
 * @f: format specifier
 *
 * Return: format specifier function pointer
 */
int (*find_format(char *f))(args)
{
	format_t specifiers[] =
	{
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int}
	};
	int index;

	for (index = 0; index < 5; index++)
	{
		if ((specifiers[index].format[0] == *f) && (f[1] != '0'))
			return (specifier[index].f);
	}
	return (NULL);
}
