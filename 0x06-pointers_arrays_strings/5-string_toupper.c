#include "main.h"
/**
 * string_toupper - function to change all lowercase to uppercase
 * @text: text to be converted
 * Return: returns string after conversion
 */
char *string_toupper(char *text)
{
	int i, len;

	char *changed;

	changed = text;

	len = 0;

	while (changed[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if ((changed[i] > 96) && (changed[i] < 123))
		{
			changed[i] = changed[i] - 32;
		}
	}
	return (changed);
}
