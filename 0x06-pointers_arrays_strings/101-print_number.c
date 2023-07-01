#include "main.h"
/**
 * print_number - function to print an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	num = n;

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
