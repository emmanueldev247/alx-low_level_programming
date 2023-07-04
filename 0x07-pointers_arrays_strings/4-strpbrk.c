#include "main.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes
  * @s: string to be searched
  * @accept: string containing the characters to search for
  * Return: Returns a pointer to the byte in s
  *          that matches one of the bytes in accept,
  *           or NULL if no such byte is found
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int len1, len2, i;

	len1 = 0;
	len2 = 0;

	while (accept[len1] != '\0')
		len1++;

	while (s[len2] != '\0')
	{
		for (i = 0; i < len1; i++)
			if (s[len2] == accept[i])
				return (s + len2);
		len2++;
	}
	return ('\0');
}
