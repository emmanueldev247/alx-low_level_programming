#include <stdlib.h>
#include "main.h"
/**
  * string_nconcat - function to concatenate 2 strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes
  *
  * Return: pointer to concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined;
	unsigned int len1, len2, i, j;

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

	if (n >= len2)
		n = len2;

	combined = malloc(sizeof(char) * (len1 + n + 1));
	if (combined == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		combined[i] = s1[i];

	for (j = 0; j < n; j++)
		combined[i++] = s2[j];

	combined[i] = '\0';

	return (combined);
}
