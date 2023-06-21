#include "main.h"
/**
 * print_times_table - function to print n times table starting @ 0
 * @n: Parameter to print times table for
 */

void print_times_table(int n)
{
	if ((n <= 15) && (n >= 1))
	{
		int i, num, ans;

		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			print_comspc();

			for (i = 1; i <= n; i++)
			{
				ans = num * i;
				if (ans < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ans + 48);
				} else if (ans < 100)
				{
					_putchar(' ');
					_putchar((ans / 10) + 48);
					_putchar((ans % 10) + 48);
				} else
				{
					_putchar((ans / 100) + 48);
					_putchar(((ans / 10) % 10) + 48);
					_putchar((ans % 10) + 48);
				}

				if (i < n)
					print_comspc();
			}
			_putchar('\n');
		}
	} else if (n ==0)
	{
			_putchar('0');
			_putchar('\n');
	}
}

/**
 * print_comspc - function to print a comma and space
 */
void print_comspc(void)
{
	_putchar(',');
	_putchar(' ');
}
