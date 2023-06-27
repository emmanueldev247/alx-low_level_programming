#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rev_string - function to reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len, i, j;
	char *str, tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	str = s;

	for (i = 0; i < (len - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = tmp;
		}
	}
}
