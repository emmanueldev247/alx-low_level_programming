#include "main.h"
/**
 * print_rev - function to reverse a string
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int len, i;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (i  = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}
