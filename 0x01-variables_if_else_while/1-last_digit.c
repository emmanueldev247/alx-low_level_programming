#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	printf("Last digit of %d is %d ", n, last);
	if (last > 5)
	{
		printf("and greater than 5");
	} else if (last == 0)
	{
		printf("and is 0");
	} else if ((last < 6) && (last != 0))
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
