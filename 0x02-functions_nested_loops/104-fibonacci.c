#include <stdio.h>
/**
 :X
 * Return: returns 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, i, sum;

	a = 1;
	b = 2;
	sum = a + b;
	printf("%lu, %lu, %lu", a, b, sum);
	for (i = 0; i < 95; i++)
	{
		c = b;
		b = sum;
		a = c;
		sum = a + b;
		printf(", %lu", sum);
	}
	printf("\n");
	return (0);
}
