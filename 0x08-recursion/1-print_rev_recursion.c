#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
	_putchar('\0');
}
