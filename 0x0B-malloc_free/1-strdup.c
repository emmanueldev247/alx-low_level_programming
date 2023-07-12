#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: pointer to the diplicated string or NULL
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	cpy = malloc(sizeof(char) * len + 1);

	if (cpy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		cpy[i] = str[i];

	return (cpy);
}
