# include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @text: text to be encoded
 * Return: returns encoded string
 */
char *rot13(char *text)
{
	int j, len;
	char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot_letter[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = 0;
	while (text[len] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (text[len] == letter[j])
			{
				text[len] = rot_letter[j];
				break;
			}
		}

		len++;
	}
	return (text);
}
