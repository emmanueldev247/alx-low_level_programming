#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: larger string to be searched
 * @needle: smaller string to search for
 * Return: Returns a pointer to the beginning
 *          of the located substring, or
 *          NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int len1, len2, tmp;

	len1 = 0;
	len2 = 0;

	if (*needle == '\0')
		return (haystack);


	while (haystack[len1] != '\0')
	{
		tmp = len1;

		while ((haystack[len1] == needle[len2]) &&  (needle[len2] != '\0') && (haystack[len1] != '\0'))
		{
			len1++;
			len2++;
		}

		if ((needle[len2] == '\0') || (haystack[len1] == '\0'))
			return (haystack + tmp);

		len1++;
	}
	return ('\0');
}
