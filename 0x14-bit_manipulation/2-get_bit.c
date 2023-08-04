#include "main.h"
/**
 * get_bit - function to return the value of a bit at a given index
 * @n: the number
 * @index: the index starting from 0
 *
 * Return: the value of the bit at the needed index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size, bits;
	int i, ind;

	ind = index;
	if (n == 0)
	{
		if (ind != 0)
			return (-1);
		else
			return (0);
	}

	size = sizeof(n) * 8;
	size--;

	for (i = size; i >= 0; i--)
	{
		if (i == ind)
		{
			bits = (n >> i) & 1;
			return (bits);
		}
	}
	return (-1);
}
