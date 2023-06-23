#include "main.h"
/**
 * print_number - Entry point
 * Description - function that prints an integer with only _putchar
 * @n: Argument representing integer to be displayed
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
