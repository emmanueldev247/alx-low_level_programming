#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of
 *   the two diagonals of a square matrix of integers
 * @a: array of integers
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum, i, usize;

	usize = size;
	sum = 0;
	for (i = 0; i < usize; i++)
		sum = sum + a[i * usize + 1];
	printf("%u, ", sum);

	sum = 0;
	for (i = 0; i < usize; i++)
		sum = sum + a[(usize - 1 - i) * usize + i];
	printf("%u\n", sum);
}
