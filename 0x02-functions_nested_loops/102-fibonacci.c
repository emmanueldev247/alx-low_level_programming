#include <stdio.h>
/**
 * main - funtion to print first 100 Fibonacci numbers
 * Returns: returns 0 (Success)
 */
int main(void)
{
	long int a, b, c, i, sum;
	a = 1;
	b = 2;
	
	sum = a + b;
	printf("%ld, %ld, %ld", a, b, sum);
	for (i = 0; i < 48; i++)
	{
		c = b;
		b = sum;
		a = c;
		sum = a + b;
		printf(", %ld", sum);
	}
	printf("\n");
	return (0);
}
