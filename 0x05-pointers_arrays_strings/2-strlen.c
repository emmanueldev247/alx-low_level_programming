#include "main.h"
#include <stdio.h>

/**
 * _strlen  function that returns the length of a string
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
