#include "main.h"
/**
 * _strcmp - function to compare two strings
 * @s1: first string
 * @s2: second string
 * Return: difference between characters in both strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, val, len1, len2;

	val = 0;
	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	for (i = 0; i < len1; i++)
	{
		val = s1[i] - s2[i];
		if (val != 0)
			return (val);
	}
	return (val);
}
