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
		if (start == 'a' + 4)
		{
			start++;
		} else if (start == 'a' +  16)
		{
			start++;
		} else
		{
			putchar(start);
			start++;
		}
	}
	putchar('\n');
	return (0);
}
