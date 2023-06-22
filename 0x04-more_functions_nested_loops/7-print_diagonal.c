#include "main.h"
/**
 * print_diagonal - function to print a diagonal line on the terminal
 * @n: argument representing the length of the line
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			spc(i);
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}

/**
 * spc - function add spaces for btter presentation of text
 * @n: argument representing the number of spaces
 */
void spc(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
}
