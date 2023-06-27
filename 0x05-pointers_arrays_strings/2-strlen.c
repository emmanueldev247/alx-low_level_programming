#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
