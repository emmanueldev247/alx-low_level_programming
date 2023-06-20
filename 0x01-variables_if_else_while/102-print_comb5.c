#include <stdio.h>
/**
 * main - Entry point
 * Description - Program to print all possible
 *				combination of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c, d, count;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			d = b + '\x01';
			count = 1;
			if (b == 56)
			{
				d = 100;
			}
			for (c = a; c < 58; c++)
			{
				if ((d == 57) || (count > 1))
				{
					d = 48;
				}
				if (d == 100)
				{
					d = 57;
				}
				if (d == 58)
				{
					d = 48;
					c = c + '\x01';
				}

				for (d = d; d < 58; d++)
				{
					if ((a != 58) && (b != 57))
					{
					if ((a != c) || (b != d))
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);
						if ((a != 57) || (b != 56) || (c != 57) || (d != 57))
						{
							putchar(',');
							putchar(' ');
						}
						count++;
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
