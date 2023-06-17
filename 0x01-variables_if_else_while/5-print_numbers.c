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
		printf("%d", start);
		start++;
	}
	putchar('\n');
	return (0);
}
