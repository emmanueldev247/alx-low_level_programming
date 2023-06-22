#include "main.h"
/**
 * print_line - function to print a line on the terminal
 * @n: argument representing the length of the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
