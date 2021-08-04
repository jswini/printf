#include "holberton.h"
/**
 * print_char - prints out a character
 * @c: character to print
 * @n: number of characters submittted
 * Return: void
 */
int print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

/**
 * print_percent - prints a %
 *
 * Return: number of characters printed
 */
int print_percent(va_list ap)
{
	(void)ap;
	_putchar('%');
	return (1);

}


/**
 * print_string - print string
 * @array: array of characters.
 * Return: length of array
 */

int print_string(va_list ap)
{
	char *array;
	int i;

	array = va_arg(ap, char *);
	for (i = 0; array[i] != '\0'; i++)
		_putchar(array[i]);
	return (_strlen(array));
}

/**
 * print_int - prints out integers
 * @num: number to print
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	int i, j, count, test, result;
	char *array;
	int num;

	num = va_arg(ap, int);
	if (num < 0)
	{
		num *= (-1);
		_putchar('-');
	}
	test = num;
	for (count = 0; test > 0; count++)
	{
		test = test / 10;
	}
	array = malloc(sizeof(char) * count + 1);
	for (i = count - 1; num > 0; i--)
	{
		result = num % 10;
		num = num / 10;
		array[i] = result + '0';
	}

	array[count] = '\0';
	for (j = 0; array[j] != '\0'; j++)
		_putchar(array[j]);

	free(array);
	return (count);

}

/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);

}
