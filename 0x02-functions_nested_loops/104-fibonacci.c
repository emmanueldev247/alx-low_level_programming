#include <stdio.h>
/**
 * main - function to print first 98 Fibonacci numbers
 * Return: returns 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, i, a1, a2, b1, b2, sum;

	a = 1;
	b = 2;
	sum = a + b;
	printf("%lu, %lu, %lu", a, b, sum);
	for (i = 0; i < 88; i++)
	{
		c = b;
		b = sum;
		a = c;
		sum = a + b;
		printf(", %lu", sum);
	}
	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;
	b1 = b1 + a1;
	a1 = b1 - a1;
	b2 = b2 + a2;
	a2 = b2 - a2;
	for (i = 93; i <= 99; i++)
	{
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
	}
	printf("\n");
	return (0);
}
