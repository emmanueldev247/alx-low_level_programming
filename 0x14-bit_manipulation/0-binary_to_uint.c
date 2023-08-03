#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to a unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: returns the converted number or 0 (failure)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value, len, i;

	value = 0;
	if (b == NULL)
		return (value);

	len = 0;
	while (b[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			value += power(2, len - 1 - i);
	}
	return (value);
}

/**
 * power - function to calculate power of numbers
 * @base: base
 * @exponent: exponent
 *
 * Return: the result of the exponentiation
 */

unsigned int power(unsigned int base, unsigned int exponent)
{
	unsigned int result, i;
	
	result = 1;

	for (i = 0; i < exponent; i++)
		result *= base;

	return (result);
}
