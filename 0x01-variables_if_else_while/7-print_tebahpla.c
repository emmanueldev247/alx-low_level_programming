#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	char stop = 'a', start = 'z';

	while (stop <= start)
	{
		putchar(start);
		start--;
	}
	putchar('\n');
	return (0);
}
