#include "holberton.h"
/**
 * print_char - prints out a character
 * @c: character to print
 * @n: number of characters submittted
 * Return: void
 */
int print_char(char c, int n)
{
	_putchar(c);
	return (n);
}

/**
 * print_percent - prints a %
 *
 * Return: number of characters printed
 */
int print_percent(void)
{
	_putchar('%');
	return (1);

}


/**
 * print_string - print string
 * @array: array of characters.
 * Return: length of array
 */
int print_string(char *array)
{
	int i;

	for (i = 0; array[i] != NULL; i++)
		putchar(array[i]);
	return (_strlen(array));
}




/**
 * print_int - prints out integers
 * @num: number to print
 * Return: number of characters printed
 */
int print_int(int num)
{
	int i, count, test, result;
	char *array;

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

	array[count] = NULL;
	print_string(array);

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
