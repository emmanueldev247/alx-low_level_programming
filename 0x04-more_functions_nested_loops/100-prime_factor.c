#include <stdio.h>
#include <math.h>
/**
 * main -Entry point
 * Description: program to  print the largest prime
 * factor of the number 612852475143
 * Return: returns 0 (success)
 */
int main(void)
{
	long int i, num, largest;

	num =  612852475143;
	largest = 1;
	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}
	if (num > 2)
	{
		largest = num;
	}
	printf("%ld\n", largest);
	return (0);
}

