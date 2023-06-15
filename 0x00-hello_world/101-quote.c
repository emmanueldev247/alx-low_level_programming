#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  (Success)
 */
int main(void)
{
	const char *message = "and that piece of art is useful\" - \
				Dora Korpar,2015-10-19";
	write(2, message, sizeof(message) - 1);
	write(2, "\n", 1);
	return (1);
}
