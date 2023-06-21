#include <stdio.h>
/**
 * main - function to print multiples of 3 or 5 below 1024 (excluded)
 * Return: returns 0 (Success)
 */
int main(void)
{
	int num, i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
