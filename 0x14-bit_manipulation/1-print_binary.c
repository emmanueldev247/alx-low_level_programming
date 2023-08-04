#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int size, bits;
	int leadingZero, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	leadingZero = 1;
	size = sizeof(n) * 8;

	for (i = size - 1; i >= 0; i--)
	{
		bits = (n >> i) & 1;
		if (bits == 1)
			leadingZero = 0;

		if (!leadingZero)
			_putchar(bits + '0');
	}
}
