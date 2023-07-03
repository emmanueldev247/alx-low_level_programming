#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: the contant to be filled
 * @n: number of bytes to be filled
 * Return: returns pointer to memory area s
 */
char *_memset(char *s, char b,  unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
