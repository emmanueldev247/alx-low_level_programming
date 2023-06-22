#include "main.h"
/**
 * print_triangle - function to print a triangle
 * @size: argument representing the size of the triangle
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			spc(size - i);
			hsh(i);
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
/**
 * hsh - function print #
 * @n: argument representing the number of #'s
 */
void hsh(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('#');
	}
}
