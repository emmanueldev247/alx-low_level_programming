#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to check
 * @accept: substring allowed
 * Return:  number of bytes in the initial segment of s
 *           which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len1, len2, len3, i;

	len1 = 0;
	len2 = 0;
	len3 = 0;

	while (accept[len1] != '\0')
		len1++;

	while (s[len2] != '\0')
	{
		for (i = 0; i < len1; i++)
		{
			if (s[len2] == accept[i])
			{
				len3++;
				break;
			}
			if (i == len1 - 1)
			{
				return (len3);
			}
		}
		len2++;
	}

	return (len3);
}
