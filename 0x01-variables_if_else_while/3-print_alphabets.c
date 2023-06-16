#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char lstart = 'a', lstop = 'z';
	char ustart = 'A', ustop = 'Z';

	while (lstart <= lstop)
	{
		putchar(lstart);
		lstart++;
	}
	while (ustart <= ustop)
	{
		putchar(ustart);
		ustart++;
	}
	putchar('\n');
	return (0);
}
