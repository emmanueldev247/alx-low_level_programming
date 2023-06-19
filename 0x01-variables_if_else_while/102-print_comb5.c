#include <stdio.h>
/**
 * main - Entry point
 * Description - Program to print all possible
 *				combination of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = a; c < 58; c++)
			{
				for (d = b + '\x01'; d < 58; d++)
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
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
