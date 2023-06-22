#include <stdio.h>
/**
 * main - Entry point
 * Description - function to print the sum of the even-valued terms of
 * terms whose values do not exceed 4,000,000 in the Fibonacci sequence
 * Return: returns 0 (Success)
 */
int main(void)
{
	long int a, b, c, sum, even;

	a = 1;
	b = 2;
	sum = 0;
	even = 2;
	sum = a + b;
	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			even = even + sum;
		}
		c = b;
		b = sum;
		a = c;
		sum = a + b;
	}
	printf("%ld\n", even);
	return (0);
}
