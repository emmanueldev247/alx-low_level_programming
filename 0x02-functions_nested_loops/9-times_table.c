#include "main.h"
/**
 * times_table - function to print 9 times table
 */
void times_table(void)
{
	int num, i, ans, tens, units;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 1; i < 10; i++)
		{
			ans = num * i;
			if (ans < 10)
			{
				_putchar(' ');
				_putchar(ans + 48);
			} else
			{
				tens = ans / 10;
				units = ans % 10;
				_putchar(tens + 48);
				_putchar(units + 48);
			}
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
