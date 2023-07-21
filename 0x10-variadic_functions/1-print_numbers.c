#include "variadic_functions.h"

/**
 * print_number - helper function that print 1 number
 * @n: number to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	num = n;
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + 48);
}

/**
 * print_string - helper function that print strings
 * @s: string to be printed
 * @len: length of string
 *
 * Return: nothing
 */
void print_string(const char *s, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; i++)
		_putchar(s[i]);
}

/**
 * print_numbers - function that print numbers
 * @separator: separator
 * @n: number of arguments
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list args;
	int len_s, num;

	va_start(args, n);

	if (n != 0 && separator != NULL)
	{
		len_s = 0;
		while (separator[len_s] != 0)
			len_s++;

		for (i = 0; i < n; i++)
		{
			num = va_arg(args, int);
			print_number(num);
			if (i != n - 1)
				print_string(separator, len_s);
		}
		va_end(args);
		_putchar('\n');
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
