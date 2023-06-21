#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n:  Parameter to check
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int val;

	if (n < 0)
	{
		n = -n;
		val = n % 10;
		_putchar(val + '0');
	} else
	{
		val = n % 10;
		_putchar(val + '0');
	}
	return (val);
}
