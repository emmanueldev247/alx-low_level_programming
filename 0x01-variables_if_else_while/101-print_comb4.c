#include <stdio.h>
/**
 * main - Entry point
 * Description - Program to print all possible
 *				combination of three digits
 * Return: 0 (Success)
 */
int main(void)
{
	int n, m, x;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (x = 50; x < 58; x++)
			{
				if (x > m)
				{
				if (m > n)
				{
					putchar(n);
					putchar(m);
					putchar(x);
					if (n != 55 || m != 56 || x != 57)
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
putchar('\n');
return (0);
}
