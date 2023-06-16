#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char start = 'a', stop = 'z';

	while (start <= stop)
	{
		putchar(start);
		start++;
	}
	putchar('\n');
	return (0);
}
