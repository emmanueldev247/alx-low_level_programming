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
		/**
		 *code to explictly convert start to char and
		 *convert to number printable with putchar
		 */
		putchar((char)start + '0');
		start++;
	}
	putchar('\n');
	return (0);
}
