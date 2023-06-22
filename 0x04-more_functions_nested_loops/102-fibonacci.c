#include <stdio.h>
/**
 * main - function to print first 50 Fibonacci numbers
 * Return: returns 0 (Success)
 */
int main(void)
{
	long int a, b, c, i, sum;

	a = 1;
	b = 2;
	sum = a + b;
	printf("%ld, %ld, %ld", a, b, sum);
	for (i = 0; i < 47; i++)
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
