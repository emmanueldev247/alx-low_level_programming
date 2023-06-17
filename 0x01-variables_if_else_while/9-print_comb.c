#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int start = 0, stop = 9;

	while (start <= stop)
	{
		putchar((char)start + '0');
		if (start != stop)
		{
			putchar(',');
			putchar(' ');
		}
		start++;
	}
	putchar('\n');
	return (0);
}
