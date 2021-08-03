#include "holberton.h"
/**
 * print_char - prints out a character
 * @c: character to print
 *
 * Return: void
 */
int print_char(char c, int n)
{
	_putchar(c);
	return (n);
}

/**
 * print_percent
 */
int print_percent(void)
{
	_putchar('%');
	return(1);
}

/**
 * _strlen - determines how long a string is
 * @s: the input string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *(s + count) != '\0'; count++)
	{}
	return (count);
}
