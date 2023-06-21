#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; 1 <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			_putchar(':');
			_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			_putchar('\n');
		}
	}
}
