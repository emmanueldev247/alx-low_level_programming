#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int start = 0, stop = 15;

	while (start <= stop)
	{
		if (start < 10)
		{
			putchar((char)start + '0');
			start++;
		} else
		{
			putchar('a' + (start - 10));
			start++;
		}
	}
	putchar('\n');
	return (0);
}
