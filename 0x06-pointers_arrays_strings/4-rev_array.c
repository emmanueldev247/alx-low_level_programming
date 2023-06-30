#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse the content of an array of integers
 * @a: array
 * @n: number of characters
 */
void reverse_array(int *a, int n)
{
	int *start, *end;

	start = a;
	end = a + n - 1;
	while (start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
