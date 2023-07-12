#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function to concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j;
	char *biggie;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	biggie = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (biggie == NULL)
	{
		free(biggie);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		biggie[i] = s1[i];

	for (j = i; j < (len1 + len2); j++)
		biggie[j] = s2[j - len1];
	biggie[j]  = '\0';
	return (biggie);
}
