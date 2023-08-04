#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;

	*n |= mask;
	return (1);
}
