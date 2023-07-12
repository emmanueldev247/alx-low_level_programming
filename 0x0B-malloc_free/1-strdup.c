#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function to duplicate string
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	duplicate = (char *)malloc(sizeof(*str) * len);

	if (duplicate == NULL)
	{
		free(duplicate);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
