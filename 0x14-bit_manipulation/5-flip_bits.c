#include "main.h"
/**
 * flip_bits - function to return the number of bits
 *				you would need to flip to get one
 *				number from the other
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int size, bitsN, bitsM, flips;
	int i;

	size = sizeof(n) * 8;
	size--;

	flips = 0;
	for (i = size; i >= 0; i--)
	{
		bitsN = (n >> i) & 1;
		bitsM = (m >> i) & 1;
		if (bitsN != bitsM)
			flips++;
	}

	return (flips);
}
